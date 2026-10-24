/* sub_60475900
 * address: 0x60475900   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60475900(sead_IDisposer *a1, int a2, int a3)
{
  sead_IDisposer *result; // r0
  char v6; // r3
  int v7; // r2

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60BFCA78;
  FIELD_U32(result + (1) * 16, 0x4) = 0;
  FIELD_U32(result + (1) * 16, 0x8) = 0;
  FIELD_U32(result + (1) * 16, 0xC) = 0;
  FIELD_U32(result + (2) * 16, 0x0) = 0;
  FIELD_U32(result + (2) * 16, 0x4) = 0;
  FIELD_U32(result + (2) * 16, 0x8) = 0;
  FIELD_U32(result + (2) * 16, 0xC) = 0;
  FIELD_U32(result + (1) * 16, 0x0) = 0;
  FIELD_U32(result + (3) * 16, 0x0) = 32;
  FIELD_U32(result + (2) * 16, 0x4) = (int)&FIELD_U32(result + (3) * 16, 0x4);
  FIELD_U32(result + (3) * 16, 0x4) = (int)&result[10];
  FIELD_U32(result + (10) * 16, 0x0) = (int)&FIELD_U32(result + (16) * 16, 0xC);
  FIELD_U32(result + (16) * 16, 0xC) = (int)&FIELD_U32(result + (23) * 16, 0x8);
  FIELD_U32(result + (23) * 16, 0x8) = (int)&FIELD_U32(result + (30) * 16, 0x4);
  FIELD_U32(result + (30) * 16, 0x4) = (int)&result[37];
  FIELD_U32(result + (37) * 16, 0x0) = (int)&FIELD_U32(result + (43) * 16, 0xC);
  FIELD_U32(result + (43) * 16, 0xC) = (int)&FIELD_U32(result + (50) * 16, 0x8);
  FIELD_U32(result + (50) * 16, 0x8) = (int)&FIELD_U32(result + (57) * 16, 0x4);
  FIELD_U32(result + (57) * 16, 0x4) = (int)&result[64];
  FIELD_U32(result + (64) * 16, 0x0) = (int)&FIELD_U32(result + (70) * 16, 0xC);
  FIELD_U32(result + (70) * 16, 0xC) = (int)&FIELD_U32(result + (77) * 16, 0x8);
  FIELD_U32(result + (77) * 16, 0x8) = (int)&FIELD_U32(result + (84) * 16, 0x4);
  FIELD_U32(result + (84) * 16, 0x4) = (int)&result[91];
  FIELD_U32(result + (91) * 16, 0x0) = (int)&FIELD_U32(result + (97) * 16, 0xC);
  FIELD_U32(result + (97) * 16, 0xC) = (int)&FIELD_U32(result + (104) * 16, 0x8);
  FIELD_U32(result + (104) * 16, 0x8) = (int)&FIELD_U32(result + (111) * 16, 0x4);
  FIELD_U32(result + (111) * 16, 0x4) = (int)&result[118];
  FIELD_U32(result + (118) * 16, 0x0) = (int)&FIELD_U32(result + (124) * 16, 0xC);
  FIELD_U32(result + (124) * 16, 0xC) = (int)&FIELD_U32(result + (131) * 16, 0x8);
  FIELD_U32(result + (131) * 16, 0x8) = (int)&FIELD_U32(result + (138) * 16, 0x4);
  FIELD_U32(result + (138) * 16, 0x4) = (int)&result[145];
  FIELD_U32(result + (145) * 16, 0x0) = (int)&FIELD_U32(result + (151) * 16, 0xC);
  FIELD_U32(result + (151) * 16, 0xC) = (int)&FIELD_U32(result + (158) * 16, 0x8);
  FIELD_U32(result + (158) * 16, 0x8) = (int)&FIELD_U32(result + (165) * 16, 0x4);
  FIELD_U32(result + (165) * 16, 0x4) = (int)&result[172];
  FIELD_U32(result + (172) * 16, 0x0) = (int)&FIELD_U32(result + (178) * 16, 0xC);
  FIELD_U32(result + (178) * 16, 0xC) = (int)&FIELD_U32(result + (185) * 16, 0x8);
  FIELD_U32(result + (185) * 16, 0x8) = (int)&FIELD_U32(result + (192) * 16, 0x4);
  FIELD_U32(result + (192) * 16, 0x4) = (int)&result[199];
  FIELD_U32(result + (199) * 16, 0x0) = (int)&FIELD_U32(result + (205) * 16, 0xC);
  FIELD_U32(result + (205) * 16, 0xC) = (int)&FIELD_U32(result + (212) * 16, 0x8);
  FIELD_U32(result + (212) * 16, 0x8) = 0;
  FIELD_U32(result + (2) * 16, 0x8) = (int)&FIELD_U32(result + (3) * 16, 0x4);
  v6 = a2;
  if ( a2 )
    v6 = 1;
  v7 = (unsigned __int8)v6 & (a3 > 0);
  if ( ((unsigned __int8)v6 & (a3 > 0)) != 0 )
    v7 = a2;
  else
    a3 = 0;
  FIELD_U32(result + (219) * 16, 0x4) = a3;
  FIELD_U32(result + (219) * 16, 0x8) = v7;
  FIELD_U32(result, 0x0) = (int)off_60BFCA94;
  FIELD_U32(result + (220) * 16, 0x0) = 0;
  FIELD_U32(result + (220) * 16, 0x4) = 0;
  return result;
}
