/* sub_60870D80
 * address: 0x60870D80   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870D80(int result)
{
  int v1; // r9
  int v2; // r8
  int v3; // r6
  int v4; // r1
  _WORD *v5; // r10
  int v6; // r5
  _DWORD *v7; // r4
  int v8; // r7
  int v9; // r0
  int v10; // r8
  int v11; // r6
  int v12; // r1
  _WORD *v13; // r10
  int v14; // r5
  _DWORD *v15; // r4
  int v16; // r7
  int v17; // r0
  int v18; // r8
  int v19; // r6
  int v20; // r1
  _WORD *v21; // r10
  int v22; // r5
  _DWORD *v23; // r4
  int v24; // r7
  int v25; // r0

  v1 = result;
  v2 = FIELD_U16(result, 98);
  if ( FIELD_U16(result, 98) )
  {
    v3 = 0;
    do
    {
      result = FIELD_U32(v1, 32) + 72 * v3;
      v5 = (_WORD *)(result + 56);
      v4 = FIELD_U16(result, 56);
      if ( (v4 & 1) != 0 )
      {
        v6 = FIELD_U8(result, 64);
        if ( FIELD_U8(result, 64) )
        {
          v7 = (_DWORD *)(result + 24);
          v8 = 16;
          do
          {
            v9 = *v7 + v8 - 16;
            if ( (*(_WORD *)(*v7 + v8) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v9);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v9);
            v8 += 48;
            --v6;
          }
          while ( v6 );
          v4 = (unsigned __int16)*v5;
        }
        result = v4 ^ 1;
        *v5 = v4 ^ 1;
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  v10 = FIELD_U16(v1, 100);
  if ( FIELD_U16(v1, 100) )
  {
    v11 = 0;
    do
    {
      result = FIELD_U32(v1, 48) + 96 * v11;
      v13 = (_WORD *)(result + 80);
      v12 = FIELD_U16(result, 80);
      if ( (v12 & 1) != 0 )
      {
        v14 = FIELD_U8(result, 88);
        if ( FIELD_U8(result, 88) )
        {
          v15 = (_DWORD *)(result + 24);
          v16 = 16;
          do
          {
            v17 = *v15 + v16 - 16;
            if ( (*(_WORD *)(*v15 + v16) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v17);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v17);
            v16 += 48;
            --v14;
          }
          while ( v14 );
          v12 = (unsigned __int16)*v13;
        }
        result = v12 ^ 1;
        *v13 = v12 ^ 1;
      }
      ++v11;
    }
    while ( v11 != v10 );
  }
  v18 = FIELD_U16(v1, 102);
  if ( FIELD_U16(v1, 102) )
  {
    v19 = 0;
    do
    {
      result = FIELD_U32(v1, 64) + 80 * v19;
      v21 = (_WORD *)(result + 64);
      v20 = FIELD_U16(result, 64);
      if ( (v20 & 1) != 0 )
      {
        v22 = FIELD_U8(result, 72);
        if ( FIELD_U8(result, 72) )
        {
          v23 = (_DWORD *)(result + 24);
          v24 = 16;
          do
          {
            v25 = *v23 + v24 - 16;
            if ( (*(_WORD *)(*v23 + v24) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v25);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v25);
            v24 += 48;
            --v22;
          }
          while ( v22 );
          v20 = (unsigned __int16)*v21;
        }
        result = v20 ^ 1;
        *v21 = v20 ^ 1;
      }
      ++v19;
    }
    while ( v19 != v18 );
  }
  return result;
}
