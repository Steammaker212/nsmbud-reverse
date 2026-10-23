/* sub_6098B728
 * address: 0x6098B728   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098B728(int a1)
{
  int v1; // r6
  int v3; // r0
  _DWORD *v4; // r5
  bool v5; // zf
  int v6; // r7
  int v7; // r4
  int v8; // r1
  int i; // r5
  int v10; // r5
  int v11; // t1
  int j; // r5
  int v13; // r5
  int v14; // t1
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  char v20; // r12
  char v21; // r12
  int *v22; // r0

  *(_DWORD *)a1 = off_60C5FFC0;
  FIELD_U32(a1, 16) = &off_60C600D8;
  if ( FIELD_U32(a1, 88) != -1 )
    sub_6098D8C4(FIELD_U32(a1, 20));
  v3 = FIELD_U32(a1, 20);
  v4 = *(_DWORD **)(v3 + 840);
  v5 = v4 == 0;
  if ( v4 )
  {
    v1 = FIELD_U32(a1, 72);
    v3 = a1 + 68;
    v5 = v1 == a1 + 68;
  }
  if ( !v5 )
  {
    v6 = FIELD_U32(a1, 80);
    v7 = v3 - v6;
    v8 = v1 - v6;
    do
    {
      sub_6097C778(v4, v8);
      v1 = FIELD_U32(v1, 4);
      v8 = v1 - v6;
    }
    while ( v1 - v6 != v7 );
  }
  for ( i = FIELD_U32(a1, 36); i != a1 + 32; i = FIELD_U32(v10, 8) )
  {
    v11 = *(_DWORD *)(i - 4);
    v10 = i - 4;
    (*(void (__fastcall **)(int))(v11 + 8))(v10);
  }
  for ( j = FIELD_U32(a1, 44); j != a1 + 40; j = FIELD_U32(v13, 8) )
  {
    v14 = *(_DWORD *)(j - 4);
    v13 = j - 4;
    (*(void (__fastcall **)(int))(v14 + 8))(v13);
  }
  v15 = FIELD_U32(a1, 108);
  if ( v15 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
  v16 = FIELD_U32(a1, 112);
  if ( v16 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 4))(v16);
  v17 = FIELD_U32(a1, 24);
  if ( v17 )
  {
    v18 = FIELD_U32(v17, 36);
    if ( (FIELD_U8(a1, 130) & 0xA) == 2 )
    {
      sub_6098B5B8();
      sub_60855C88(*(_DWORD **)(a1 + 24), FIELD_U32(dword_60CCF464, 36));
      v19 = FIELD_U32(a1, 24);
      if ( v19 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      sub_6098B60C();
      FIELD_U32(a1, 24) = 0;
    }
    if ( v18 )
    {
      (*(void (__fastcall **)(int, int (*)(), _DWORD))(*(_DWORD *)v18 + 16))(v18, sub_60990A58, 0);
      sub_6098B5B8();
      if ( ((unsigned int)&dword_60C9DA64 & ~(1620621508 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA64) )
      {
        if ( ((unsigned int)&dword_60C9DA14 & ~(1620621548 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA14) )
        {
          dword_60C9DA10 = 0;
          _cxa_guard_release(&dword_60C9DA14);
        }
        dword_60C9DA60 = (int)&dword_60C9DA10;
        _cxa_guard_release(&dword_60C9DA64);
      }
      v22 = (int *)(**(int (__fastcall ***)(int))v18)(v18);
      if ( v22 )
      {
        while ( v22 != &dword_60C9DA60 )
        {
          v22 = (int *)*v22;
          if ( !v22 )
            goto LABEL_33;
        }
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v18 + 20))(v18, FIELD_U32(dword_60CCF464, 36));
      }
LABEL_33:
      sub_6098B60C();
    }
  }
  return sead__IDisposer__dtor((_DWORD *)a1);
}
