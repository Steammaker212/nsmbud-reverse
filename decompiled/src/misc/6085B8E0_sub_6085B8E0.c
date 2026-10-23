/* sub_6085B8E0
 * address: 0x6085B8E0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085B8E0(int a1, _BYTE *a2, char a3)
{
  int v6; // r0
  _BYTE *v7; // r6
  _BYTE *v8; // r3
  _BYTE *v10; // r2

  v6 = sub_60855BC8(52);
  if ( !v6 )
    return 0;
  *(_DWORD *)v6 = v6;
  FIELD_U32(v6, 4) = v6;
  FIELD_U32(v6, 16) = 0;
  FIELD_U32(v6, 20) = 2;
  FIELD_U32(v6, 24) = 0;
  FIELD_U32(v6, 28) = 0;
  FIELD_U32(v6, 32) = 0;
  FIELD_U32(v6, 36) = 0;
  FIELD_U32(v6, 40) = 0;
  FIELD_U32(v6, 44) = 0;
  FIELD_U8(v6, 48) = a3;
  FIELD_U8(v6, 8) = 0;
  v7 = (_BYTE *)(v6 + 8);
  if ( *a2 )
  {
    FIELD_U8(v6, 8) = *a2;
    v8 = a2 + 1;
    if ( a2[1] )
    {
      FIELD_U8(v6, 9) = a2[1];
      v8 = a2 + 2;
      if ( a2[2] )
      {
        FIELD_U8(v6, 10) = a2[2];
        v8 = a2 + 3;
        if ( a2[3] )
        {
          FIELD_U8(v6, 11) = a2[3];
          v8 = a2 + 4;
          if ( a2[4] )
          {
            FIELD_U8(v6, 12) = a2[4];
            v8 = a2 + 5;
            if ( a2[5] )
            {
              FIELD_U8(v6, 13) = a2[5];
              v8 = a2 + 6;
              if ( a2[6] )
              {
                FIELD_U8(v6, 14) = a2[6];
                v7 = (_BYTE *)(v6 + 15);
                v8 = a2 + 7;
              }
              else
              {
                v7 = (_BYTE *)(v6 + 14);
              }
            }
            else
            {
              v7 = (_BYTE *)(v6 + 13);
            }
          }
          else
          {
            v7 = (_BYTE *)(v6 + 12);
          }
        }
        else
        {
          v7 = (_BYTE *)(v6 + 11);
        }
      }
      else
      {
        v7 = (_BYTE *)(v6 + 10);
      }
    }
    else
    {
      v7 = (_BYTE *)(v6 + 9);
    }
  }
  else
  {
    v8 = a2;
  }
  *v7 = 0;
  if ( *v8 )
  {
    v10 = v8 + 1;
    while ( *v10++ )
      ;
  }
  *(_DWORD *)v6 = *(_DWORD *)a1;
  FIELD_U32(v6, 4) = a1;
  *(_DWORD *)(*(_DWORD *)a1 + 4) = v6;
  *(_DWORD *)a1 = v6;
  return v6 + 16;
}
