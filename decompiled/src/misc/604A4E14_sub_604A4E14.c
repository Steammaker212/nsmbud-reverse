/* sub_604A4E14
 * address: 0x604A4E14   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A4E14(int a1, unsigned int a2)
{
  unsigned int v4; // r6
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r0
  _BYTE *v9; // r1
  int result; // r0
  int v11; // r0
  _BYTE *v12; // r1
  int *v13; // r2
  int v14; // r0
  int *v15; // r2
  _BYTE *v16; // r1
  int v17; // r0
  unsigned int v18; // r2
  int *v19; // r1
  unsigned int v20; // r2

  v4 = a2;
  if ( a2 >= 6 )
    v4 = 0;
  v5 = sub_60834614();
  if ( dword_60C89E18 || dword_60C99DD4 || (v6 = FIELD_U32(v5, 492), v6 <= 4) && ((1 << v6) & 0x16) != 0 )
  {
    v7 = v5 + 72 * v4;
    if ( FIELD_U8(v7, 20) )
    {
      v8 = v7 + 32;
      v9 = *(_BYTE **)(a1 + 20488);
      if ( v9 )
      {
        if ( *(_DWORD *)v8 < 7u )
          v9 += *(_DWORD *)v8;
        *v9 = 1;
      }
      return *(_DWORD *)v8;
    }
  }
  else if ( !(v6 | a2) )
  {
    v16 = *(_BYTE **)(a1 + 20488);
    v17 = v5 + 72 * v4 + 32;
    if ( v16 )
    {
      if ( *(_DWORD *)v17 < 7u )
        v16 += *(_DWORD *)v17;
      *v16 = 1;
    }
    return *(_DWORD *)v17;
  }
  v11 = sub_60834FDC();
  v12 = *(_BYTE **)(a1 + 20488);
  if ( v11 )
  {
    if ( v12 )
    {
      if ( v12[1] )
      {
        if ( v12[2] || v12[3] )
        {
          if ( v12[4] )
          {
            result = 7;
            if ( v12[5] )
              return result;
            v13 = &dword_60B02CDC;
            v14 = 3;
          }
          else
          {
            v13 = &dword_60B02CD8;
            v14 = 2;
          }
        }
        else
        {
          v13 = &dword_60B02CD4;
          v14 = 1;
        }
      }
      else
      {
        v13 = &dword_60B02CD0;
        v14 = 0;
      }
      v18 = *v13;
      if ( v18 < 7 )
        v12 += v18;
      *v12 = 1;
    }
    else
    {
      v14 = 0;
    }
    v19 = &dword_60B02CD0;
  }
  else
  {
    if ( v12 )
    {
      if ( *v12 )
      {
        if ( v12[1] )
        {
          if ( v12[2] || v12[3] )
          {
            if ( v12[4] )
            {
              result = 7;
              if ( v12[5] )
                return result;
              v15 = &dword_60B02CF0;
              v14 = 4;
            }
            else
            {
              v15 = &dword_60B02CEC;
              v14 = 3;
            }
          }
          else
          {
            v15 = &dword_60B02CE8;
            v14 = 2;
          }
        }
        else
        {
          v15 = &dword_60B02CE4;
          v14 = 1;
        }
      }
      else
      {
        v15 = &dword_60B02CE0;
        v14 = 0;
      }
      v20 = *v15;
      if ( v20 < 7 )
        v12 += v20;
      *v12 = 1;
    }
    else
    {
      v14 = 0;
    }
    v19 = &dword_60B02CE0;
  }
  return v19[v14];
}
