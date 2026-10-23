/* sub_603BC708
 * address: 0x603BC708   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BC708(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int result; // r0
  int target; // [sp+4h] [bp-14h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  sub_600035C0(a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 1.0, 0.5);
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v4 + 18) >> 5) + 2224) & (1 << ((v4 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v4 + 22) >> 5) + 2224) & (1 << ((v4 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v4 + 28) >> 5) + 2224) & (1 << ((v4 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v4 ^ 1;
    v5 = 786432000;
    if ( !v4 )
      v5 = -786432000;
    FIELD_U32(a1, 160) = v5;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  target = 0;
  result = moveValueTo((int *)(a1 + 156), &target, &dword_60C98448);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98330);
  return result;
}
