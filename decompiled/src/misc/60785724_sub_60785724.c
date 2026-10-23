/* sub_60785724
 * address: 0x60785724   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60785724(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // s0
  int v6[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 1872);
  if ( v2 )
    FIELD_U32(a1, 1872) = v2 - 1;
  v3 = FIELD_U32(a1, 1876);
  if ( v3 )
    FIELD_U32(a1, 1876) = v3 - 1;
  ((void (__fastcall *)(int))loc_607857AC)(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  sub_607855B8(a1);
  *(float *)&v4 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)v6 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v6[1] = v4;
  sub_602F2FD0(a1 + 648, v6, 0);
  ShapedCollider_execute((ColliderBase *)(a1 + 1216));
  return 1;
}
