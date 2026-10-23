/* sub_600F6120
 * address: 0x600F6120   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F6120(int a1)
{
  unsigned int v2; // r0
  bool v3; // zf
  int v4; // r1
  int v5; // r5
  int result; // r0
  int v7; // r2
  unsigned __int64 v8; // kr00_8

  if ( FIELD_U8(a1, 6304) )
  {
    v2 = FIELD_F32(a1, 108) >= FIELD_F32(dword_60CC6484, 116);
    FIELD_U32(a1, 80) = v2;
  }
  else
  {
    v2 = FIELD_U32(a1, 80);
  }
  v3 = v2 == 1;
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6344);
  FIELD_F32(a1, 112) = (float)(FIELD_F32(a1, 6348) + (float)((float)FIELD_S32(a1, 6312) * 28.0)) + 16.0;
  v4 = FIELD_U32(a1, 6320);
  if ( v2 == 1 )
    v2 = v4 ^ 0x80000000;
  FIELD_U32(a1, 120) = v4;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  if ( v3 )
    FIELD_U32(a1, 120) = v2;
  v5 = dword_60C85B48;
  v8 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)(unsigned int)v5;
  v7 = HIDWORD(v8);
  result = v8;
  if ( (FIELD_U32(a1, 6308) & 1) != 0 )
    v7 = -HIDWORD(v8);
  FIELD_U32(a1, 164) = v7;
  return result;
}
