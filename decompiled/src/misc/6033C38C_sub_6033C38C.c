/* sub_6033C38C
 * address: 0x6033C38C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033C38C(int a1)
{
  float v2; // s18
  float v3; // s16
  unsigned int v4; // r5
  char v5; // r9
  unsigned int v6; // r8
  char v7; // r7
  unsigned int v8; // r0
  char v9; // cf
  char v10; // cc
  int result; // r0

  v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 304);
  v3 = FIELD_F32(a1, 312) + 3.0;
  v4 = (unsigned __int16)(int)(float)-(float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 308));
  v5 = sub_607160F4(TileMgr_instance, (int)(float)(v3 + v2), v4, FIELD_U8(a1, 86), 1);
  v6 = sub_6071638C(TileMgr_instance, (int)(float)(v3 + v2), v4, FIELD_U8(a1, 86));
  v7 = sub_607160F4(TileMgr_instance, (int)(float)(v2 - v3), v4, FIELD_U8(a1, 86), 1);
  v8 = sub_6071638C(TileMgr_instance, (int)(float)(v2 - v3), v4, FIELD_U8(a1, 86));
  v10 = ((v5 & 0xE) != 0) & v9;
  if ( (v5 & 0xE) != 0 )
    v10 = v6 > 1;
  if ( v10 || (v7 & 0xE) != 0 && v8 >= 2 )
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
      result = 1;
    else
      result = 2;
  }
  else
  {
    result = 3;
  }
  FIELD_U8(a1, 296) = result;
  return result;
}
