/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableDictionary;

@interface SBProximitySensorInterface : SBUnknownSuperclass {
	int _lockedMode;	// 4 = 0x4
	int _currentMode;	// 8 = 0x8
	int _lastSetMode;	// 12 = 0xc
	NSMutableDictionary *_pidToClients;	// 16 = 0x10
	dispatch_queue_s *_clientQueue;	// 20 = 0x14
}
@property(readonly, assign) int currentMode;	// G=0x18163d; converted property
+ (id)sharedInstance;	// 0x180bb5
+ (int)_HIDDetectionModeForSBDetectionMode:(int)sbdetectionMode;	// 0x18053d
- (id)init;	// 0x1817b5
- (void)dealloc;	// 0x181751
- (int)_queue_currentMode;	// 0x180519
// converted property getter: - (int)currentMode;	// 0x18163d
- (int)requestedMode;	// 0x181601
- (void)_updateProximityDetectionMode;	// 0x181515
- (BOOL)_addClient:(id)client;	// 0x1813f5
- (BOOL)_removeClient:(id)client;	// 0x1812d9
- (id)_existingClientForPID:(int)pid;	// 0x181191
- (void)clientEstablished:(id)established;	// 0x181109
- (void)clientDied:(id)died;	// 0x181081
- (int)_detectionModeForSBSDetectionMode:(int)sbsdetectionMode;	// 0x180569
- (BOOL)_updateClientPID:(int)pid clientPort:(unsigned)port withDetectionMode:(int)detectionMode;	// 0x180e8d
- (BOOL)clientRequestedProximityMode:(int)mode processID:(int)anId clientPort:(unsigned)port;	// 0x180df9
- (void)requestProximityMode:(int)mode;	// 0x180dcd
- (void)disableProximityDetection;	// 0x180d25
- (void)enableProximityDetectionWithMode:(int)mode;	// 0x180be1
@end