/* RumbleMgr_ctor
 * address: 0x60456B44   size: 816   group: misc
 * sym: # RumbleMgr_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall RumbleMgr_ctor(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask2_ctor(a1, a2, (int)"RumbleMgr");
  FIELD_U32(result, 0x0) = (int)off_60BFB12C;
  LOBYTE(FIELD_U32(result + (12) * 16, 0x0)) = 0;
  FIELD_U32(result + (12) * 16, 0xC) = 0;
  FIELD_U32(result + (12) * 16, 0x8) = (int)&FIELD_U32(result + (12) * 16, 0x4);
  FIELD_U32(result + (12) * 16, 0x4) = (int)&FIELD_U32(result + (12) * 16, 0x4);
  FIELD_U32(result + (13) * 16, 0x0) = (int)&FIELD_U32(result + (13) * 16, 0xC);
  FIELD_U32(result + (13) * 16, 0xC) = (int)&result[16];
  FIELD_U32(result + (16) * 16, 0x0) = (int)&FIELD_U32(result + (18) * 16, 0x4);
  FIELD_U32(result + (18) * 16, 0x4) = (int)&FIELD_U32(result + (20) * 16, 0x8);
  FIELD_U32(result + (20) * 16, 0x8) = (int)&FIELD_U32(result + (22) * 16, 0xC);
  FIELD_U32(result + (22) * 16, 0xC) = (int)&result[25];
  FIELD_U32(result + (25) * 16, 0x0) = (int)&FIELD_U32(result + (27) * 16, 0x4);
  FIELD_U32(result + (27) * 16, 0x4) = (int)&FIELD_U32(result + (29) * 16, 0x8);
  FIELD_U32(result + (29) * 16, 0x8) = (int)&FIELD_U32(result + (31) * 16, 0xC);
  FIELD_U32(result + (31) * 16, 0xC) = (int)&result[34];
  FIELD_U32(result + (34) * 16, 0x0) = (int)&FIELD_U32(result + (36) * 16, 0x4);
  FIELD_U32(result + (36) * 16, 0x4) = (int)&FIELD_U32(result + (38) * 16, 0x8);
  FIELD_U32(result + (38) * 16, 0x8) = (int)&FIELD_U32(result + (40) * 16, 0xC);
  FIELD_U32(result + (40) * 16, 0xC) = (int)&result[43];
  FIELD_U32(result + (43) * 16, 0x0) = (int)&FIELD_U32(result + (45) * 16, 0x4);
  FIELD_U32(result + (45) * 16, 0x4) = (int)&FIELD_U32(result + (47) * 16, 0x8);
  FIELD_U32(result + (47) * 16, 0x8) = 0;
  FIELD_U32(result + (13) * 16, 0x4) = (int)&FIELD_U32(result + (13) * 16, 0xC);
  FIELD_U32(result + (13) * 16, 0x8) = 16;
  FIELD_U32(result + (50) * 16, 0x4) = 0;
  FIELD_U32(result + (50) * 16, 0x0) = (int)&FIELD_U32(result + (49) * 16, 0xC);
  FIELD_U32(result + (49) * 16, 0xC) = (int)&FIELD_U32(result + (49) * 16, 0xC);
  FIELD_U32(result + (50) * 16, 0x8) = (int)&FIELD_U32(result + (51) * 16, 0x4);
  FIELD_U32(result + (51) * 16, 0x4) = (int)&FIELD_U32(result + (53) * 16, 0x8);
  FIELD_U32(result + (53) * 16, 0x8) = (int)&FIELD_U32(result + (55) * 16, 0xC);
  FIELD_U32(result + (55) * 16, 0xC) = (int)&result[58];
  FIELD_U32(result + (58) * 16, 0x0) = (int)&FIELD_U32(result + (60) * 16, 0x4);
  FIELD_U32(result + (60) * 16, 0x4) = (int)&FIELD_U32(result + (62) * 16, 0x8);
  FIELD_U32(result + (62) * 16, 0x8) = (int)&FIELD_U32(result + (64) * 16, 0xC);
  FIELD_U32(result + (64) * 16, 0xC) = (int)&result[67];
  FIELD_U32(result + (67) * 16, 0x0) = (int)&FIELD_U32(result + (69) * 16, 0x4);
  FIELD_U32(result + (69) * 16, 0x4) = (int)&FIELD_U32(result + (71) * 16, 0x8);
  FIELD_U32(result + (71) * 16, 0x8) = (int)&FIELD_U32(result + (73) * 16, 0xC);
  FIELD_U32(result + (73) * 16, 0xC) = (int)&result[76];
  FIELD_U32(result + (76) * 16, 0x0) = (int)&FIELD_U32(result + (78) * 16, 0x4);
  FIELD_U32(result + (78) * 16, 0x4) = (int)&FIELD_U32(result + (80) * 16, 0x8);
  FIELD_U32(result + (80) * 16, 0x8) = (int)&FIELD_U32(result + (82) * 16, 0xC);
  FIELD_U32(result + (82) * 16, 0xC) = (int)&result[85];
  FIELD_U32(result + (85) * 16, 0x0) = 0;
  FIELD_U32(result + (50) * 16, 0xC) = (int)&FIELD_U32(result + (51) * 16, 0x4);
  FIELD_U32(result + (51) * 16, 0x0) = 16;
  FIELD_U32(result + (87) * 16, 0xC) = 0;
  FIELD_U32(result + (87) * 16, 0x8) = (int)&FIELD_U32(result + (87) * 16, 0x4);
  FIELD_U32(result + (87) * 16, 0x4) = (int)&FIELD_U32(result + (87) * 16, 0x4);
  FIELD_U32(result + (88) * 16, 0x0) = (int)&FIELD_U32(result + (88) * 16, 0xC);
  FIELD_U32(result + (88) * 16, 0xC) = (int)&result[91];
  FIELD_U32(result + (91) * 16, 0x0) = (int)&FIELD_U32(result + (93) * 16, 0x4);
  FIELD_U32(result + (93) * 16, 0x4) = (int)&FIELD_U32(result + (95) * 16, 0x8);
  FIELD_U32(result + (95) * 16, 0x8) = (int)&FIELD_U32(result + (97) * 16, 0xC);
  FIELD_U32(result + (97) * 16, 0xC) = (int)&result[100];
  FIELD_U32(result + (100) * 16, 0x0) = (int)&FIELD_U32(result + (102) * 16, 0x4);
  FIELD_U32(result + (102) * 16, 0x4) = (int)&FIELD_U32(result + (104) * 16, 0x8);
  FIELD_U32(result + (104) * 16, 0x8) = (int)&FIELD_U32(result + (106) * 16, 0xC);
  FIELD_U32(result + (106) * 16, 0xC) = (int)&result[109];
  FIELD_U32(result + (109) * 16, 0x0) = (int)&FIELD_U32(result + (111) * 16, 0x4);
  FIELD_U32(result + (111) * 16, 0x4) = (int)&FIELD_U32(result + (113) * 16, 0x8);
  FIELD_U32(result + (113) * 16, 0x8) = (int)&FIELD_U32(result + (115) * 16, 0xC);
  FIELD_U32(result + (115) * 16, 0xC) = (int)&result[118];
  FIELD_U32(result + (118) * 16, 0x0) = (int)&FIELD_U32(result + (120) * 16, 0x4);
  FIELD_U32(result + (120) * 16, 0x4) = (int)&FIELD_U32(result + (122) * 16, 0x8);
  FIELD_U32(result + (122) * 16, 0x8) = 0;
  FIELD_U32(result + (88) * 16, 0x4) = (int)&FIELD_U32(result + (88) * 16, 0xC);
  FIELD_U32(result + (88) * 16, 0x8) = 16;
  FIELD_U32(result + (125) * 16, 0x4) = 0;
  FIELD_U32(result + (125) * 16, 0x0) = (int)&FIELD_U32(result + (124) * 16, 0xC);
  FIELD_U32(result + (124) * 16, 0xC) = (int)&FIELD_U32(result + (124) * 16, 0xC);
  FIELD_U32(result + (125) * 16, 0x8) = (int)&FIELD_U32(result + (126) * 16, 0x4);
  FIELD_U32(result + (126) * 16, 0x4) = (int)&FIELD_U32(result + (128) * 16, 0x8);
  FIELD_U32(result + (128) * 16, 0x8) = (int)&FIELD_U32(result + (130) * 16, 0xC);
  FIELD_U32(result + (130) * 16, 0xC) = (int)&result[133];
  FIELD_U32(result + (133) * 16, 0x0) = (int)&FIELD_U32(result + (135) * 16, 0x4);
  FIELD_U32(result + (135) * 16, 0x4) = (int)&FIELD_U32(result + (137) * 16, 0x8);
  FIELD_U32(result + (137) * 16, 0x8) = (int)&FIELD_U32(result + (139) * 16, 0xC);
  FIELD_U32(result + (139) * 16, 0xC) = (int)&result[142];
  FIELD_U32(result + (142) * 16, 0x0) = (int)&FIELD_U32(result + (144) * 16, 0x4);
  FIELD_U32(result + (144) * 16, 0x4) = (int)&FIELD_U32(result + (146) * 16, 0x8);
  FIELD_U32(result + (146) * 16, 0x8) = (int)&FIELD_U32(result + (148) * 16, 0xC);
  FIELD_U32(result + (148) * 16, 0xC) = (int)&result[151];
  FIELD_U32(result + (151) * 16, 0x0) = (int)&FIELD_U32(result + (153) * 16, 0x4);
  FIELD_U32(result + (153) * 16, 0x4) = (int)&FIELD_U32(result + (155) * 16, 0x8);
  FIELD_U32(result + (155) * 16, 0x8) = (int)&FIELD_U32(result + (157) * 16, 0xC);
  FIELD_U32(result + (157) * 16, 0xC) = (int)&result[160];
  FIELD_U32(result + (160) * 16, 0x0) = 0;
  FIELD_U32(result + (125) * 16, 0xC) = (int)&FIELD_U32(result + (126) * 16, 0x4);
  FIELD_U32(result + (126) * 16, 0x0) = 16;
  LOBYTE(FIELD_U32(result + (162) * 16, 0x4)) = 15;
  BYTE1(FIELD_U32(result + (162) * 16, 0x4)) = 0;
  return result;
}
