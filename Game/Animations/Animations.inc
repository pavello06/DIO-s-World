;General------------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------

;Bonuses------------------------------------------------------------------------
heartAnimation dd FALSE, 0, 150, 0, heartFrames

arrowAnimation dd TRUE, 0, 10000, 0, arrowFrames

worldAnimation dd TRUE, 0, 10000, 0, worldFrames

;Mobs---------------------------------------------------------------------------
venusFlycatcherAnimations dd TRUE, 0, 10, 0, deadVenusFlycatcherFrames, FALSE, 0, 120, 0, venusFlycatcherFrames

;Player-------------------------------------------------------------------------
playerAnimations dd 5,\
FALSE, 0, 200, 0, standingPlayerFrames,\
FALSE, 0, 200, 0, runningPlayerFrames,\
TRUE, 0, 10000, 0, upJumpingPlayerFrames,\
TRUE, 0, 10000, 0, downJumpingPlayerFrames,\
TRUE, 0, 10000, 0, dyingPlayerFrames

invulnerablePlayerAnimations dd 5,\
FALSE, 0, 200, 0, invulnerableStandingPlayerFrames,\
FALSE, 0, 200, 0, invulnerableRunningPlayerFrames,\
TRUE, 0, 10000, 0, invulnerableUpJumpingPlayerFrames,\
TRUE, 0, 10000, 0, invulnerableDownJumpingPlayerFrames,\
TRUE, 0, 10000, 0, invulnerableDyingPlayerFrames

;Location1----------------------------------------------------------------------
;Blocks-------------------------------------------------------------------------

;Decorations--------------------------------------------------------------------

;Mobs---------------------------------------------------------------------------
owlAnimations dd TRUE, 0, 10, 0, deadOwlFrames, FALSE, 100, 0, 0, owlFrames

beeAnimations dd TRUE, 0, 10, 0, deadBeeFrames, FALSE, 0, 120, 0, beeFrames