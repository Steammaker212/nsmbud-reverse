/* Player__vf14
 * address: 0x6079569C   size: 304   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079569C(int a1)
{
  int v2; // r1

  sub_60788ED8(PlayerMgr_instance, FIELD_S8(a1, 84), a1);
  v2 = FIELD_U32(a1, 1320);
  FIELD_U32(a1, 11388) = v2;
  FIELD_U32(a1, 11384) = v2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 144))(a1);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 620) = a1 + 12932;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 11484) = 0;
  sub_6079F260(a1);
  sub_6079A758(a1);
  if ( sub_6078A64C(PlayerMgr_instance, FIELD_S8(a1, 84)) == 1 )
    (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1200))(a1, 2, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1360))(a1);
  FIELD_U32(a1, 1152) = sub_600243A0(FIELD_U32(a1, 1320));
  FIELD_U32(a1, 964) = FIELD_S8(a1, 84);
  sub_600210C8(a1 + 11488, a1);
  PlayerBase_vf5(a1);
  FIELD_U8(a1, 15076) = 1;
  return 1;
}
