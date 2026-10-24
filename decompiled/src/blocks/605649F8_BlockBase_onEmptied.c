/* BlockBase_onEmptied
 * address: 0x605649F8   size: 400   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BlockBase_onEmptied(ColliderBase *a1)
{
  int v2; // r0
  int *v3; // r5
  int *v4; // r6
  bool v5; // zf
  _BYTE *v6; // r5
  int (__fastcall *v7)(ColliderBase *, int *); // r2
  int *v8; // r1
  int v9; // r0

  FIELD_F32(a1, 0x74) = a1[21].field_D0;
  a1[19].field_150 = 0;
  v3 = &a1[21].field_E4;
  v2 = a1[21].field_E4;
  v4 = v3 - 128;
  v5 = v2 == 1;
  if ( v2 == 1 )
    v5 = *v4 == 21;
  if ( v5 )
  {
    v9 = LOBYTE(a1[21].field_EC);
    a1[20].nodes[7].owner = 0;
    BYTE2(a1[20].nodes[2].next) = 0;
    v7 = *(int (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192);
    if ( v9 )
      v8 = &dword_60CB111C;
    else
      v8 = &dword_60CAE2F8;
  }
  else
  {
    sub_60564834(&FIELD_U32(a1, 0x0));
    if ( *v4 != 13 )
    {
      (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE31C);
      BYTE2(a1[20].nodes[2].next) = 0;
      *v3 = 2;
      FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)50;
      a1[18].field_138 = (int)sub_605B3700;
      a1[18].field_13C = (int)sub_605B4010;
      a1[18].field_140 = (int)sub_605B4A6C;
      ColliderBase_setType(a1 + 18, 12);
      a1[18].field_150 = 0;
      return 6456;
    }
    v6 = (char *)&a1[20].nodes[2].next + 2;
    if ( BYTE2(a1[20].nodes[2].next) != 2 )
    {
      (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE2F8);
      a1[20].nodes[7].owner = 0;
      *v6 = 0;
      return 0;
    }
    *v6 = 0;
    a1[20].nodes[7].owner = 0;
    v7 = *(int (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192);
    v8 = &dword_60CB057C;
  }
  return v7(a1, v8);
}
