/* sub_604CDAD8
 * address: 0x604CDAD8   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CDAD8(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r1
  unsigned int i; // r3
  unsigned int v6; // r12
  _DWORD *v7; // r2
  unsigned int v9; // r1
  _DWORD *v10; // r1
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  _DWORD *v14; // r1
  int v16; // [sp+0h] [bp-30h]
  _DWORD v17[11]; // [sp+4h] [bp-2Ch] BYREF

  v2 = 0;
  sub_604D0DF4((int)(a1 + 22312), 0, (int)a1);
  sub_604D0DF4((int)(a1 + 35473), 1, (int)a1);
  sub_604D0DF4((int)(a1 + 48634), 2, (int)a1);
  sub_604D0DF4((int)(a1 + 61795), 3, (int)a1);
  sub_604D0DF4((int)(a1 + 74956), 4, (int)a1);
  sub_604D0DF4((int)(a1 + 88117), 5, (int)a1);
  sub_604D0DF4((int)(a1 + 101278), 6, (int)a1);
  sub_604D0DF4((int)(a1 + 114439), 7, (int)a1);
  sub_604D0DF4((int)(a1 + 127600), 8, (int)a1);
  sub_604D0DF4((int)(a1 + 140761), 9, (int)a1);
  v16 = dword_60C99DEC;
  do
  {
    v3 = &a1[13161 * v2];
    if ( *((_BYTE *)v3 + 89292) )
    {
      v4 = v3[35361];
      if ( v4 < 0 )
      {
LABEL_12:
        for ( i = v4 + 1; ; ++i )
        {
          v9 = 0;
          if ( i < 0xD )
            v9 = i;
          if ( (*(_BYTE *)(v3[v9 + 23274] + 64) & 1) != 0 )
          {
            v10 = v3 + 22312;
            if ( i < 0xC )
              v10 = (_DWORD *)((char *)v10 + i);
            if ( *((_BYTE *)v10 + 45) )
              break;
          }
        }
      }
      else
      {
        i = 0;
        while ( 1 )
        {
          v6 = 0;
          if ( i < 0xD )
            v6 = i;
          if ( (*(_BYTE *)(v3[v6 + 23274] + 64) & 1) != 0 )
          {
            v7 = v3 + 22312;
            if ( i < 0xC )
              v7 = (_DWORD *)((char *)v7 + i);
            if ( *((_BYTE *)v7 + 45) )
              break;
          }
          if ( (int)i++ >= v4 )
            goto LABEL_12;
        }
      }
      v17[0] = i;
      v3[23544] = i;
      v3[35467] = i;
      v3[35468] = i;
    }
    ++v2;
  }
  while ( v2 != 10 );
  v11 = FIELD_S16(v16, 526);
  if ( v11 == -1 )
  {
    a1[153923] = 0;
    a1[153925] = 0;
  }
  else
  {
    a1[153923] = v11;
    v12 = FIELD_U16(v16, 526);
    v13 = (__int16)v12;
    a1[153925] = (__int16)v12;
    if ( v12 >= 0xA )
      v13 = 0;
    sub_604D11AC(&a1[13161 * v13 + 22312]);
  }
  sub_604D1444(a1);
  CourseSelectVS_Index_00_ref(a1);
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = sub_604DABE0(1);
  sub_60473DE4(a1 + 10, 1u, v17, 0);
  v14 = (_DWORD *)a1[888];
  if ( a1[887] > 1u )
    v14 += 5;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v14 + 104))(*v14);
}
