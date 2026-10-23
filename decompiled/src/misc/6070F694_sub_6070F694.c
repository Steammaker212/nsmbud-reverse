/* sub_6070F694
 * address: 0x6070F694   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070F694(int a1)
{
  int *v2; // r1
  unsigned int v3; // r5
  int v4; // r5
  int v5; // r0

  v2 = dword_6070F8B8;
  if ( FIELD_U8(a1, 86) == 1 )
    v2 = &dword_6070F8B8[1];
  FIELD_U32(a1, 116) = *v2;
  v3 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6152) = v3 & 0xF;
  FIELD_U32(a1, 6156) = (unsigned __int16)v3 >> 12;
  FIELD_U32(a1, 6160) = HIBYTE(v3) & 0xF;
  FIELD_U32(a1, 6164) = (v3 >> 28) & 7;
  FIELD_U32(a1, 6168) = HIWORD(v3) & 0xF;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1117782016;
  FIELD_U32(a1, 504) = 1117782016;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 620) = a1 + 6112;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  I_yoshi_egg_ref_70F8E0(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B09CE0, &stru_60B09CEC, &stru_60B09CF8);
  v4 = (unsigned __int8)(v3 >> 4);
  if ( FIELD_U32(a1, 6156) == 1 )
  {
    FIELD_U32(a1, 568) |= 0x20u;
    sub_6070FAA0(a1, (FIELD_U32(a1, 20) >> 20) & 0xF);
    FIELD_U32(a1, 6176) = v4;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBD168);
  }
  else
  {
    if ( FIELD_U8(a1, 86) != 1 )
      FIELD_U32(a1, 116) = -1027080192;
    FIELD_U32(a1, 6172) = 3;
    v5 = FIELD_U32(a1, 6160);
    if ( v4 == 3 )
    {
      if ( v5 == 1 )
      {
        FIELD_U32(a1, 6176) = FIELD_U32(a1, 20) >> 31;
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBD148);
      }
      else
      {
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBD108);
      }
    }
    else if ( v5 == 1 )
    {
      FIELD_U32(a1, 6176) = FIELD_U32(a1, 20) >> 31;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CBD128);
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBD0E8);
    }
  }
  sub_6070FC1C(a1);
  return 1;
}
