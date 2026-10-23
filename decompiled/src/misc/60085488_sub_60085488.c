/* sub_60085488
 * address: 0x60085488   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60085488(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  CollisionMgr *v9; // r4
  int v10; // t1
  CollisionMgr_Sensor v11; // [sp+0h] [bp-20h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    FIELD_U32(a1, 7616) |= 1u;
  v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
  {
    v10 = FIELD_U32(a1, 7616);
    v9 = (CollisionMgr *)(a1 + 7616);
    FIELD_U32(v9, 0x0) = v10 & 0xFFFFFFFD;
    *(_DWORD *)&v9[-2].gapA1C[820] = 0;
    *(_DWORD *)&v9[-2].gapA1C[812] = 1097859072;
    *(_DWORD *)&v9[-2].gapA1C[816] = 1096810496;
    *(_DWORD *)&v9[-2].gapA1C[804] = 0;
    *(_DWORD *)&v9[-2].gapA1C[808] = 1096810496;
    *(_DWORD *)&v9[-1].gapA1C[1984] = 0;
    *(_DWORD *)&v9[-1].gapA1C[1988] = 1101004800;
    *(_DWORD *)&v9[-1].gapA1C[1992] = 1099956224;
    *(_DWORD *)&v9[-1].gapA1C[1996] = 1101004800;
    v9 = (CollisionMgr *)((char *)v9 - 6968);
    CollisionMgr_setSensor(v9, &stru_60AF5588, 2);
    CollisionMgr_setSensor(v9, &stru_60AF5594, 0);
    v11.b = 12.0;
    v11.a = 12.0;
    v11.c = -12.0;
    CollisionMgr_setSensor(v9, &v11, 1);
  }
}
