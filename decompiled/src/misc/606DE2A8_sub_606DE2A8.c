/* sub_606DE2A8
 * address: 0x606DE2A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DE2A8(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  int v5; // r5
  float v6; // s16
  float v7; // s0
  int v8; // r0
  int result; // r0

  v4 = FIELD_U16(a1, 6788);
  v2 = (_WORD *)(a1 + 6788);
  v3 = v4;
  v5 = *((_DWORD *)v2 - 1657);
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v6 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  v7 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
  v8 = FIELD_U32(a1, 160) + sub_605AE948(a1, v6 * v7);
  FIELD_U32(a1, 160) = v8;
  result = v8 - v5;
  FIELD_U32(a1, 6736) = result;
  return result;
}
