// Copyright 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSFileCoordinator.h>

@interface NSFileCoordinator (OFExtensions)

// NOTE: Due to bugs in NSFileCoordination, if you are doing case-only renames, your file presenter WILL NOT get notified of the rename (on any file system type), but will just get a generic 'changed' event. This means it is safest to (1) always pass a filePresenter to the coordination created for doing renames and notify it yourself and (2) only have one file presenter per URL (since only one presenter can be thus registered).
- (BOOL)moveItemAtURL:(NSURL *)sourceURL toURL:(NSURL *)destinationURL createIntermediateDirectories:(BOOL)createIntermediateDirectories error:(NSError **)outError;

@end
