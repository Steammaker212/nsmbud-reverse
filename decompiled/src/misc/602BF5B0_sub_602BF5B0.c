/* sub_602BF5B0
 * address: 0x602BF5B0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BF5B0(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  __int64 v7; // r0
  int result; // r0
  float v9; // s0

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( !v4 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) == 0 )
      goto LABEL_8;
    v3 = 32;
    *v2 = 32;
  }
  v5 = v3 - 1;
  if ( v5 )
    v6 = FIELD_U32(a1, 160) + dword_60C911E4;
  else
    v6 = 0;
  FIELD_U32(a1, 160) = v6;
  *v2 = v5;
LABEL_8:
  v7 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = *(_DWORD *)(EventMgr__instance + 16) & v7
         | ((*(_QWORD *)(EventMgr__instance + 16) & (unsigned __int64)v7) >> 32);
  if ( result )
  {
    if ( !FIELD_U8(a1, 6472) )
      FIELD_U8(a1, 6472) = 1;
    result = a1 + 6344;
    v9 = FIELD_F32(a1, 6344) + 0.0625;
    FIELD_F32(a1, 6344) = v9;
    if ( v9 >= 1.0 )
    {
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9129C);
    }
    else
    {
      FIELD_F32(a1, 144) = v9;
      FIELD_F32(a1, 148) = v9;
      FIELD_F32(a1, 152) = v9;
    }
  }
  return result;
}
