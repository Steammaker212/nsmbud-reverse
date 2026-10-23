/* sub_603BBE34
 * address: 0x603BBE34   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BBE34(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
    if ( v4 == (*(int (**)(void))(dword_60C98370 + 8))() )
    {
      v5 = FIELD_U32(a1, 80);
      if ( v5 != FIELD_U32(a1, 6844) )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98390);
      FIELD_F32(a1, 120) = (float)byte_60AFE3F4[v5] * 0.5;
    }
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
      FIELD_U32(a1, 124) = 1072483533;
    FIELD_U8(a1, 6840) = 1;
  }
  v6 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98390);
  }
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6824) + 12));
}
