/* sub_6047DA04
 * address: 0x6047DA04   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047DA04(_DWORD *a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // r5
  char *v4; // r7
  int v5; // r8
  char *v6; // r9
  unsigned __int16 *v7; // r6
  int v8; // r4
  int v9; // r0
  int v10; // t1
  unsigned int v11; // r0
  int v12; // t1
  int v13; // r0

  v3 = a2;
  v4 = (char *)a1[2];
  v5 = 0;
  v6 = &v4[4 * *a1];
  if ( *a1 && a3 >= 2 )
  {
    v5 = 0;
    v7 = a2;
    v8 = a3 / 2;
    do
    {
      v9 = *a2;
      if ( v9 == 15 )
      {
        v7 += 3;
        if ( !a2 )
        {
          v9 = *v7;
          if ( v9 == 10 )
          {
LABEL_13:
            ++v7;
            goto LABEL_14;
          }
          goto LABEL_16;
        }
      }
      else
      {
        if ( v9 != 14 )
        {
          v7 = a2;
          if ( v9 == 10 )
            goto LABEL_13;
LABEL_16:
          if ( v9 == 4 )
          {
            (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, int))(**(_DWORD **)v4 + 132))(
              *(_DWORD *)v4,
              v7,
              0,
              2);
            v7 += 2;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, int))(**(_DWORD **)v4 + 132))(
              *(_DWORD *)v4,
              v7++,
              0,
              1);
          }
          goto LABEL_19;
        }
        v7 = (unsigned __int16 *)((char *)v7 + a2[3] + 8);
      }
      if ( (unsigned int)a2[1] - 12 < 8 )
        goto LABEL_14;
      (*(void (__fastcall **)(_DWORD, unsigned __int16 *, _DWORD, unsigned int))(**(_DWORD **)v4 + 132))(
        *(_DWORD *)v4,
        a2,
        0,
        ((unsigned int)a2[3] + 8) >> 1);
LABEL_19:
      v10 = *(_DWORD *)v4;
      v4 += 4;
      ++v5;
      FIELD_U8(v10, 64) |= 1u;
      if ( v4 == v6 )
        break;
LABEL_14:
      a2 = v7;
    }
    while ( v7 - v3 < v8 );
  }
  if ( v4 != v6 )
  {
    v11 = (unsigned int)(v6 - 4 - v4) >> 2;
    if ( ((v6 - 4 - v4) & 4) == 0 )
    {
      v12 = *(_DWORD *)v4;
      v4 += 4;
      FIELD_U8(v12, 64) &= ~1u;
    }
    if ( v11 )
    {
      do
      {
        *(_BYTE *)(*(_DWORD *)v4 + 64) &= ~1u;
        v13 = *((_DWORD *)v4 + 1);
        v4 += 8;
        FIELD_U8(v13, 64) &= ~1u;
      }
      while ( v4 != v6 );
    }
  }
  return v5;
}
