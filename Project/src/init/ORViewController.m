/* Copyright (c) 2014, Massimo Gengarelli, orwell-int members
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * - Neither the name of the orwell-int organization nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL MASSIMO GENGARELLI BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "ORViewController.h"
#import "OREventOrientation.h"

@implementation ORViewController {
	BOOL _autoRotate;
}
@synthesize supportedOrientations = _supportedOrientations;

- (id)init
{
	self = [super init];
	_supportedOrientations = UIInterfaceOrientationMaskPortrait;
	_autoRotate = NO;
	return self;
}

- (NSUInteger)supportedInterfaceOrientations
{
	return _supportedOrientations;
}

- (BOOL)shouldAutorotate
{
	return _autoRotate;
}

- (void)setSupportedOrientations:(NSUInteger)supportedOrientations
{
	_supportedOrientations = supportedOrientations;
	if ((_supportedOrientations & UIInterfaceOrientationMaskLandscape)) {
		_autoRotate = YES;
		DDLogInfo(@"AutoRotate will be YES");
	}
	else {
		_autoRotate = NO;
		DDLogInfo(@"AutoRotate will be NO");
	}
}

- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
	SPEvent *event = [[OREventOrientation alloc] initWithType:OR_EVENT_ORIENTATION_CHANGED
													  bubbles:NO
												toOrientation:toInterfaceOrientation];

	[[UIApplication sharedApplication] setStatusBarOrientation:toInterfaceOrientation animated:YES];
	[[Sparrow stage] broadcastEvent:event];
}

- (void)willAnimateRotationToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
	SPEvent *event = [[OREventOrientation alloc] initWithType:OR_EVENT_ORIENTATION_ANIMATION_CHANGED
													  bubbles:NO
												toOrientation:toInterfaceOrientation];

	[[UIApplication sharedApplication] setStatusBarOrientation:toInterfaceOrientation animated:YES];
	[[Sparrow stage] broadcastEvent:event];
}

- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation
{
	SPEvent *event = [[OREventOrientation alloc] initWithType:OR_EVENT_ORIENTATION_FROM_CHANGED
													  bubbles:NO
											  fromOrientation:fromInterfaceOrientation];

	[[Sparrow stage] broadcastEvent:event];
}

@end
