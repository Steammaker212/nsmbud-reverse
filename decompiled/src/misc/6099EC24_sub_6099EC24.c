/* sub_6099EC24
 * address: 0x6099EC24   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6099EC24(_DWORD *a1, unsigned int a2, unsigned int *a3, int a4)
{
  unsigned int v8; // r9
  _BOOL4 v9; // r10
  int v10; // r5
  int v11; // r7
  unsigned int *v12; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r5
  int v17; // r4
  _DWORD *v18; // r1
  bool v19; // cc
  int v20; // r0

  *a3 = 0;
  if ( !nn__os__GetTlsValue(dword_60CCFC58) )
    nn__os__GetCurrentCoreNumber(0);
  if ( !nn__os__GetTlsValue(dword_60CCFC58) )
    nn__os__GetCurrentCoreNumber(0);
  v8 = 0;
  v9 = 1;
  v10 = -1;
  if ( a2 )
  {
    v11 = 0;
    if ( a1[30] )
    {
      if ( a4 )
        FIELD_U32(a4, 148) = 3;
      v12 = a1 + 4;
      while ( *v12 == 1 )
        ;
      do
      {
        while ( __ldrex(v12) )
          ;
      }
      while ( __strex(1u, v12) );
      if ( a4 )
        FIELD_U32(a4, 148) = 4;
      v14 = a1[30];
      v11 = a1[31];
      v8 = v14 - v11;
      if ( v14 - v11 > a2 )
        v8 = a2;
      v15 = v8 + v11;
      a1[31] = v8 + v11;
      __dmb(0xBu);
      do
      {
        do
          v16 = __ldrex(v12);
        while ( v16 != 1 );
      }
      while ( __strex(0, v12) );
      v10 = v15 - 1;
      v9 = v15 >= v14;
    }
  }
  else
  {
    v11 = 0;
  }
  if ( !nn__os__GetTlsValue(dword_60CCFC58) )
    nn__os__GetCurrentCoreNumber(0);
  sub_6099EE5C(a1 + 22);
  if ( a4 )
    FIELD_U32(a4, 148) = 5;
  if ( v11 <= v10 )
  {
    v17 = 4 * v11;
    do
    {
      v18 = (_DWORD *)a1[29];
      if ( a1[28] > (unsigned int)v11 )
        v18 = (_DWORD *)((char *)v18 + v17);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v18 + 8))(*v18);
      v19 = v11 < v10;
      v17 += 4;
      ++v11;
    }
    while ( v19 );
  }
  if ( a4 )
    FIELD_U32(a4, 148) = 6;
  if ( !nn__os__GetTlsValue(dword_60CCFC58) )
    nn__os__GetCurrentCoreNumber(0);
  if ( v9 )
  {
    if ( a4 )
    {
      v20 = 8;
LABEL_40:
      FIELD_U32(a4, 148) = v20;
    }
  }
  else if ( a4 )
  {
    v20 = 7;
    goto LABEL_40;
  }
  *a3 = v8;
  return v9;
}
