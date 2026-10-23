/* sub_607356C4
 * address: 0x607356C4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607356C4(int a1)
{
  unsigned int v2; // r0
  char **v3; // r1
  const char *v4; // r0
  int *v5; // r6
  _DWORD *v6; // r0
  int *v7; // r7
  int v8; // r1
  _DWORD **v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r1
  _DWORD **v15; // r0
  int (**v17)(); // [sp+0h] [bp-30h] BYREF
  const char *v18; // [sp+4h] [bp-2Ch]
  _DWORD v19[10]; // [sp+8h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 10416) )
    goto LABEL_19;
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = &byte_60B3BA34;
  v2 = FIELD_U32(a1, 6772);
  if ( v2 <= 0xC )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      v17 = &sead__SafeStringBase__vtable;
      v3 = off_60C22904;
    }
    else
    {
      v17 = &sead__SafeStringBase__vtable;
      v3 = off_60C228D4;
    }
    v4 = v3[v2];
    goto LABEL_9;
  }
  if ( v2 == 24 )
  {
    v17 = &sead__SafeStringBase__vtable;
    v4 = "item_icon.8";
LABEL_9:
    v18 = v4;
    sead__SafeStringBase__operator_assign((int)v19, (int)&v17);
  }
  sub_60479910(a1 + 6856, dword_60C7B3E4);
  v5 = (int *)(a1 + 6100);
  v6 = **(_DWORD ***)(FIELD_U32(a1, 6100) + 20);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "item_icon.0";
  v7 = (int *)(a1 + 6864);
  sub_604511EC(v6, &v17, FIELD_U32(a1, 6864) + 296);
  v8 = FIELD_U32(a1, 6864);
  if ( FIELD_U32(a1, 6860) > 1u )
    v8 += 832;
  sub_604511EC(**(_DWORD ***)(*v5 + 20), v19, v8 + 296);
  v9 = *(_DWORD ***)(*v5 + 20);
  if ( *(_DWORD *)(*v5 + 16) > 1u )
    ++v9;
  v10 = *v9;
  v17 = &sead__SafeStringBase__vtable;
  v18 = "item_icon.0";
  sub_604511EC(v10, &v17, *v7 + 296);
  v11 = *v7;
  v12 = *v5;
  if ( FIELD_U32(a1, 6860) > 1u )
    v11 += 832;
  v13 = v11 + 296;
  v14 = FIELD_U32(v12, 16);
  v15 = *(_DWORD ***)(v12 + 20);
  if ( v14 > 1 )
    ++v15;
  sub_604511EC(*v15, v19, v13);
LABEL_19:
  if ( FIELD_U8(a1, 6761) )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6100));
  return 1;
}
