/* PanelMiniGame_bflyt_ref
 * address: 0x6073508C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PanelMiniGame_bflyt_ref(int a1)
{
  unsigned int v2; // r1
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r7
  int (**v7)(); // [sp+Ch] [bp-3Ch] BYREF
  const char *v8; // [sp+10h] [bp-38h]
  int v9; // [sp+14h] [bp-34h] BYREF
  int v10; // [sp+18h] [bp-30h]
  int v11; // [sp+1Ch] [bp-2Ch] BYREF
  int v12; // [sp+20h] [bp-28h]

  sub_60002B50(a1 + 6812);
  sub_60002B50(a1 + 6832);
  v2 = FIELD_U32(a1, 20) & 0x1F;
  FIELD_U32(a1, 6772) = v2;
  if ( v2 == 24 )
  {
    FIELD_U8(a1, 6760) = 1;
    v3 = 8;
    v4 = dword_60CC6D8C;
  }
  else
  {
    v5 = &unk_60B0A3E0;
    v4 = dword_60CC6D8C;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v5 = &unk_60B0A3B0;
    if ( v2 >= 0xC )
      v2 = 0;
    v3 = v5[v2];
  }
  FIELD_U32(a1, 6776) = v3;
  FIELD_U32(a1, 12088) = 0;
  FIELD_U32(a1, 12088) = FIELD_U8(v4, 17);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + -144.0;
  sub_607352AC(a1);
  sub_607354C4(a1);
  v11 = (int)&sead__SafeStringBase__vtable;
  v9 = (int)&sead__SafeStringBase__vtable;
  v12 = (int)"Game";
  v10 = (int)"PanelMiniGame.bflyt";
  sub_60479588(a1 + 6856, (int)&v11, &v9, 0);
  v7 = &sead__SafeStringBase__vtable;
  v11 = 192;
  v12 = 192;
  v9 = 1128267776;
  v10 = 1128267776;
  v8 = "Panel";
  sub_60479600(a1 + 6856, 0, &v11, &v9, 25.0, &v7, *(void **)(a1 + 6828));
  v11 = 192;
  v9 = 1128267776;
  v7 = &sead__SafeStringBase__vtable;
  v12 = 192;
  v10 = 1128267776;
  v8 = "Panel";
  sub_60479600(a1 + 6856, 1u, &v11, &v9, (float)FIELD_S32(a1, 6772), &v7, *(void **)(a1 + 6848));
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B0A410, 0, 0);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDD80);
  return 1;
}
