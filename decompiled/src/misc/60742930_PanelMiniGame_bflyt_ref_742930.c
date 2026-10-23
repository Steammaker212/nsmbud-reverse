/* PanelMiniGame_bflyt_ref_742930
 * address: 0x60742930   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PanelMiniGame_bflyt_ref_742930(int a1)
{
  unsigned int v2; // r4
  int v3; // r11
  int v4; // r6
  float *v5; // r7
  _DWORD v7[2]; // [sp+Ch] [bp-3Ch] BYREF
  int v8; // [sp+14h] [bp-34h] BYREF
  int v9; // [sp+18h] [bp-30h]
  int v10; // [sp+1Ch] [bp-2Ch] BYREF
  int v11; // [sp+20h] [bp-28h]

  v2 = 0;
  FIELD_U8(a1, 6113) = FIELD_U32(a1, 20) & 0xF;
  v10 = (int)&sead__SafeStringBase__vtable;
  v8 = (int)&sead__SafeStringBase__vtable;
  v11 = (int)"Game";
  v9 = (int)"PanelMiniGame.bflyt";
  v3 = a1 + 6688;
  sub_60479588(a1 + 6688, (int)&v10, &v8, 0);
  v4 = a1 + 6284;
  v5 = (float *)&unk_60B0A50C;
  do
  {
    sub_60002B50(v4);
    v10 = 192;
    v8 = 1128267776;
    v7[0] = &sead__SafeStringBase__vtable;
    v11 = 192;
    v9 = 1128267776;
    v7[1] = "Panel";
    sub_60479600(v3, v2++, &v10, &v8, *v5++, v7, *(void **)(v4 + 16));
    v4 += 20;
  }
  while ( v2 != 20 );
  sub_60742A70(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBE3B0);
  return 1;
}
