/* sub_60914E10
 * address: 0x60914E10   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60914E10(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r5
  int v5; // r6
  _DWORD *v6; // r2
  _DWORD *v7; // r1
  _DWORD *v8; // r5
  _DWORD *v9; // r3
  _DWORD *v10; // r3
  int v11; // r0
  int v12; // r6
  int v13; // r0

  v4 = 0;
  v5 = 0;
  if ( (*(_BYTE *)(a1[2] + 120) & 1) != 0 )
  {
    v5 = (int)(a1 + 8);
    sead__CriticalSection__lock((int)(a1 + 8));
  }
  v6 = (_DWORD *)a1[6];
  if ( v6 )
  {
    v7 = 0;
    v8 = (_DWORD *)a1[6];
    do
    {
      v9 = v8;
      if ( v8 == a2 )
      {
        v10 = a1 + 6;
        if ( v7 )
        {
          v6 = a2;
          v10 = v7 + 71;
        }
        *v10 = v6[71];
        if ( (_DWORD *)a1[7] == a2 )
        {
          if ( !v7 )
            v7 = (_DWORD *)a1[6];
          a1[7] = v7;
        }
        v4 = a2;
        goto LABEL_16;
      }
      v8 = (_DWORD *)v8[71];
      v7 = v9;
    }
    while ( v8 );
    v4 = 0;
    if ( v5 )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    if ( v5 )
LABEL_17:
      sead__CriticalSection__unlock(v5);
  }
  v11 = v4[70];
  if ( v11 )
  {
    do
    {
      v12 = FIELD_U32(v11, 24);
      sub_60913BEC(v11);
      v11 = v12;
    }
    while ( v12 );
  }
  v4[70] = 0;
  if ( (int)v4[68] < 0 )
  {
    dword_60CC73E4(v4 + 4);
    v4[68] &= ~0x80000000;
  }
  v13 = v4[1];
  if ( v13 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 16))(v13);
    v4[1] = 0;
  }
  if ( v4[2] )
  {
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*v4 + 8) + 28))(*(_DWORD *)(*v4 + 8));
    v4[2] = 0;
  }
  return (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[2] + 28))(a1[2], v4);
}
