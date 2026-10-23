/* sub_605D9648
 * address: 0x605D9648   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D9648(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int result; // r0
  _DWORD *v6; // r5
  int a5; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h] BYREF

  v2 = 0x40000000;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  v3 = FIELD_U32(a1, 80);
  if ( v3 == 1 )
    v2 = -1073741824;
  v8 = v2;
  a5 = (unsigned __int8)byte_60B0594C[v3] << 28;
  sub_6083246C((int *)(a1 + 160), &v8, &a5);
  v6 = (_DWORD *)(a1 + 8008);
  result = FIELD_U32(a1, 8008);
  if ( result == 1 )
  {
    FIELD_U32(a1, 120) = 0;
    result = sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), v4);
    if ( result == 1 )
    {
      FIELD_U32(a1, 8000) = 0;
      FIELD_U32(a1, 8004) = 0;
      *v6 = 0;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6292), (StateBase *)&dword_60CB1690);
    }
  }
  else if ( !result )
  {
    if ( sub_605DA7CC(a1, FIELD_U32(a1, 80)) == 1 )
    {
      FIELD_U32(a1, 80) ^= 1u;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    }
    result = FIELD_U8(a1, 6804);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 120) = 0;
      sub_605EAB48(a1 + 6064, 0.0);
      *v6 = 1;
      return 1;
    }
  }
  return result;
}
