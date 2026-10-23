/* sub_6049A838
 * address: 0x6049A838   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049A838(int a1)
{
  int v2; // r1
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r2
  int *v5; // r5
  float v6; // s0
  int *v7; // r1
  char *v8; // r1
  int v9; // r0
  int v10; // r6
  float v11; // s0
  int v12; // r0
  int v13; // r0

  v2 = FIELD_U8(a1, 5348);
  result = (StateMethodExecuter *)FIELD_U8(dword_60CC6D8C, 17);
  if ( v2 )
  {
    v4 = dword_60AF23C4;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v4 = &unk_60B02BDC;
    v5 = (int *)(a1 + 5332);
    FIELD_U32(a1, 5336) = v4[FIELD_U32(a1, 5332)];
    *(_BYTE *)(*(v5 - 412) + 64) |= 1u;
    *(_BYTE *)(*(v5 - 411) + 64) &= ~1u;
    *(_BYTE *)(*(v5 - 407) + 65) = 0;
    FIELD_U8(a1, 5349) = 1;
    if ( FIELD_U8(a1, 5354) )
    {
      FIELD_U32(a1, 5336) = dword_60B02BEC[*(_DWORD *)(FIELD_U32(a1, 3632) + 376)];
      sub_6049C294(a1, a1 + 5336);
      sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0788, 0);
      v6 = sub_604745C0(a1 + 44, 0);
      sub_6047455C(a1 + 44, 0, v6);
      v7 = &dword_60CA0908;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v7);
    }
    if ( result )
    {
      v8 = (char *)&unk_60B02BDC + 4 * *v5;
      v9 = a1;
    }
    else
    {
      v9 = a1;
      v8 = (char *)(a1 + 5332);
    }
    sub_6049C294(v9, v8);
    v10 = dword_60C9CFB8;
    if ( sub_604593D0(dword_60C9CFB8, *v5) )
    {
      FIELD_U8(a1, 5356) = 1;
LABEL_15:
      sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0788, 0);
      v11 = sub_604745C0(a1 + 44, 0);
      sub_6047455C(a1 + 44, 0, v11);
      v7 = &dword_60CA0848;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v7);
    }
    if ( sub_604592A0(v10, *v5) )
    {
      v12 = *v5;
      if ( (unsigned int)*v5 >= 4 )
        v12 = 0;
      v13 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 404 * v12 + 4040) + 20))(*(_DWORD *)(a1 + 404 * v12 + 4040));
      FIELD_U8(a1, 5356) = v13;
      FIELD_U32(a1, 5344) = 0;
      if ( v13 == 1 )
        goto LABEL_15;
    }
    else
    {
      FIELD_U8(a1, 5356) = 0;
    }
    if ( FIELD_U32(a1, 3632) )
      FIELD_U32(a1, 3632) = 0;
    sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0788, 0);
    sub_6047455C(a1 + 44, 0, 0.0);
    v7 = &dword_60CA0808;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v7);
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = *(StateMethodExecuter **)(a1 + 5332);
    if ( !result )
    {
      sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA07C8, 0);
      *(_BYTE *)(FIELD_U32(a1, 3700) + 64) &= ~1u;
      *(_BYTE *)(FIELD_U32(a1, 3712) + 64) &= ~1u;
      *(_BYTE *)(FIELD_U32(a1, 3708) + 65) = -1;
      *(_BYTE *)(FIELD_U32(a1, 3668) + 65) = -1;
      *(_BYTE *)(FIELD_U32(a1, 3668) + 64) |= 1u;
      *(_BYTE *)(FIELD_U32(a1, 3672) + 64) &= ~1u;
      *(_BYTE *)(FIELD_U32(a1, 3676) + 64) &= ~1u;
      *(_BYTE *)(FIELD_U32(a1, 3680) + 64) &= ~1u;
      result = (StateMethodExecuter *)5355;
      FIELD_U8(a1, 5355) = 1;
    }
  }
  return result;
}
