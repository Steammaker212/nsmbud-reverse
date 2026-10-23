/* sub_6024ADA8
 * address: 0x6024ADA8   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024ADA8(int a1)
{
  int v1; // r12
  int v2; // r1
  int v3; // r2
  _DWORD *v4; // r7
  int v5; // r2
  _BYTE *v6; // r1
  unsigned int *v7; // r6
  int v8; // r9
  _BYTE *v9; // r8
  char v10; // r12
  StateBase *CurrentState; // r0
  int v12; // r10
  StateMgr *v15; // [sp+8h] [bp-48h]
  _BYTE *v16; // [sp+1Ch] [bp-34h]
  int v17; // [sp+20h] [bp-30h]
  int v18; // [sp+24h] [bp-2Ch]
  int v19; // [sp+28h] [bp-28h]

  v1 = FIELD_U32(a1, 112);
  v2 = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v19 = FIELD_U32(a1, 164);
  v18 = FIELD_U32(a1, 160);
  v17 = FIELD_U32(a1, 156);
  v4 = (_DWORD *)(a1 + 12344);
  do
  {
    *v4 = v3;
    v4[1] = v1;
    v4[2] = v2;
    v4[5] = v19;
    v4[4] = v18;
    v4[3] = v17;
    v4 += 6;
  }
  while ( (unsigned int)v4 <= a1 + 15392 );
  v5 = 0;
  v6 = (_BYTE *)(a1 + 15416);
  do
  {
    *v6++ = v5;
    v5 += 12;
  }
  while ( (unsigned int)v6 <= a1 + 15420 );
  v7 = (unsigned int *)(a1 + 15424);
  v8 = 4;
  FIELD_U8(a1, 15421) = 0;
  v15 = (StateMgr *)(a1 + 6084);
  v16 = (_BYTE *)(a1 + 6472);
  do
  {
    v9 = sub_6024A7E8(v7);
    if ( ((unsigned int)dword_60C8DD54 & ~(1613016780 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
    {
      dword_60C8DD50 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C8DD54);
    }
    if ( v9 )
    {
      if ( (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C8DD50) == 1 )
      {
        if ( !*v16
          || (CurrentState = StateMgr__getCurrentState(v15),
              v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
              v12 == (*(int (__fastcall **)(int *))(dword_60C9133C + 8))(&dword_60C9133C)) )
        {
          (*(void (__fastcall **)(_BYTE *, void *))(*(_DWORD *)v9 + 192))(v9, &unk_60C915A4);
        }
      }
    }
    --v8;
  }
  while ( v8 );
  FIELD_U8(a1, 15460) = 1;
  FIELD_U8(a1, 15462) = 1;
  return 15462;
}
