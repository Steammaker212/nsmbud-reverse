/* sub_601E2F20
 * address: 0x601E2F20   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E2F20(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  int v4; // r6
  unsigned int v5; // r0
  MovingSoundActor *v6; // r7
  int v7; // r0
  MovingSoundActor *v8; // r7
  _DWORD *v9; // r5
  char v10; // r12
  unsigned int v11; // r0
  int v12; // r0
  MovingSoundActor *v13; // r7
  int (__fastcall ***v14)(_DWORD, int *); // r5
  char v15; // r12
  MovingSoundActor *v16; // r6
  int v17; // r5
  int v18; // r6
  int result; // r0
  _DWORD v20[2]; // [sp+0h] [bp-30h] BYREF
  Vec2 v21[5]; // [sp+8h] [bp-28h] BYREF

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v3 = sub_601C6974(v2);
  v4 = a1 + 16;
  if ( v3 >= 8 )
    v3 = 0;
  *(_BYTE *)(*(_DWORD *)(v4 + 4 * v3) + 317) = 1;
  v5 = sub_601C6974(v2);
  if ( v5 >= 8 )
    v5 = 0;
  v6 = *(MovingSoundActor **)(v4 + 4 * v5);
  sub_60024460((double *)&v21[0].x, v2 + 80);
  MovingSoundActor_setPosition(v6, v21);
  v7 = sub_601918EC(dword_60C8996C);
  v8 = *(MovingSoundActor **)(a1 + 48);
  if ( FIELD_U8(v7, 521) )
  {
    v20[0] = 0;
    v20[1] = 0;
    sub_6002442C((double *)&v21[0].x, (int)v20);
  }
  else
  {
    sub_60024460((double *)&v21[0].x, v2 + 80);
  }
  MovingSoundActor_setPosition(v8, v21);
  v9 = *(_DWORD **)(v2 + 272);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612591104 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  if ( v9 && (*(int (__fastcall **)(_DWORD *, int *))*v9)(v9, &dword_60C88AB4) == 1 )
  {
    do
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*v9 + 92))(v9) == 1 )
      {
        v11 = sub_601C6974((int)v9);
        if ( v11 >= 8 )
          v11 = 0;
        v12 = a1 + 4 * v11;
        *(_BYTE *)(FIELD_U32(v12, 16) + 317) = 0;
        v13 = *(MovingSoundActor **)(v12 + 16);
        sub_60024460((double *)&v21[0].x, (int)(v9 + 20));
        MovingSoundActor_setPosition(v13, v21);
      }
      v9 = (_DWORD *)v9[68];
    }
    while ( v9 );
  }
  if ( !FIELD_U8(dword_60CC6D78, 28) )
  {
    v14 = (int (__fastcall ***)(_DWORD, int *))sub_601693DC(
                                                 885,
                                                 FIELD_U32(dword_60CC6D78, 412),
                                                 FIELD_U32(dword_60CC6D78, 416),
                                                 20);
LABEL_26:
    if ( v14 )
    {
      v16 = *(MovingSoundActor **)(a1 + 4);
      sub_60024460((double *)&v21[0].x, (int)(v14 + 20));
      MovingSoundActor_setPosition(v16, v21);
    }
    goto LABEL_28;
  }
  v14 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(884);
  if ( ((unsigned int)&dword_60C88A98 & ~(1612591364 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A98) )
  {
    dword_60C88A94 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88A98);
  }
  if ( v14 && (**v14)(v14, &dword_60C88A94) )
    goto LABEL_26;
LABEL_28:
  v17 = 0;
  v18 = 96;
  do
  {
    result = *(unsigned __int8 *)(a1 + v18);
    if ( *(_BYTE *)(a1 + v18) )
      result = sub_601E322C(a1, v17);
    ++v17;
    v18 += 48;
  }
  while ( v17 != 30 );
  return result;
}
