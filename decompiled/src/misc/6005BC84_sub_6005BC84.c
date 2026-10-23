/* sub_6005BC84
 * address: 0x6005BC84   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005BC84(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  __int16 v5; // r1
  int v6; // r0
  char v7; // r6
  int v8; // r1
  int v9; // r0
  float v10; // s0
  int result; // r0
  bool v12; // zf

  v2 = a1 + 7836;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 4) != 0 )
  {
    v5 = FIELD_U16(a1, 6640);
    v6 = a1 + 6332;
    if ( FIELD_U8(a1, 7936) )
    {
      v7 = 0;
      sub_608134CC(v6, "SE_EMY_BUNBUN_WING1", v5, 0);
    }
    else
    {
      sub_608134CC(v6, "SE_EMY_BUNBUN_WING2", v5, 0);
      v7 = 1;
    }
    FIELD_U8(a1, 7936) = v7;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v9 = FIELD_U32(a1, 2872);
  if ( (v9 & 1) != 0 )
  {
    v8 = 0;
    FIELD_U32(a1, 124) = 0;
  }
  if ( (v9 & 0x440000) != 0 && (v8 = v9 & 0x10000000, (v9 & 0x10000000) == 0)
    || (v9 & 0x880000) != 0 && (v9 & 0x20000000) == 0 )
  {
    if ( (FIELD_U8(a1, 2882) & 0xC) == 0 )
      FIELD_U32(a1, 120) = 0;
  }
  ((void (__fastcall *)(int, int, float, float, float, float))loc_60832560)(a1 + 120, v8, 0.0, 0.1, 1.0, 0.0);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 124, 0.0, 0.1, 1.0, 0.0);
  v10 = CollisionActor__handleSpeed((CollisionActor *)a1);
  result = sub_6005EAFC(a1, FIELD_U32(a1, 80), v10);
  v12 = FIELD_U16(a1, 6276) == 0;
  if ( !FIELD_U16(a1, 6276) )
  {
    result ^= 1u;
    v12 = result == 0;
  }
  if ( v12 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C80DB0);
  return result;
}
