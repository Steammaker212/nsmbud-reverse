/* sub_60739F60
 * address: 0x60739F60   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60739F60(int a1)
{
  int result; // r0
  char *v3; // r7
  _WORD *v4; // r2
  int v5; // r0
  _WORD *v6; // r4
  int v7; // t1
  unsigned __int8 v8; // r10
  int v9; // r0
  char v10; // r0
  unsigned __int8 v11; // r8
  int v12; // r0
  int v13; // r0

  v3 = (char *)(a1 + 6102);
  result = FIELD_U8(a1, 6102);
  switch ( result )
  {
    case 0:
      if ( FIELD_U16(a1, 6100) )
      {
        result = FIELD_U16(a1, 6100) - 1;
      }
      else
      {
        if ( FIELD_U8(a1, 6108) )
        {
          v8 = 0;
          do
          {
            if ( *(_BYTE *)(sub_6073AFA4(a1, v8) + 7400) )
            {
              v9 = *(_DWORD *)(sub_6073AFA4(a1, v8) + 7396);
              FIELD_U8(v9, 6801) = 0;
              StateMgr__changeState((StateMgr *)(v9 + 6084), (StateBase *)&dword_60CBDDE0);
            }
            ++v8;
          }
          while ( v8 < (unsigned int)FIELD_U8(a1, 6108) );
          v10 = *v3 + 1;
        }
        else
        {
          v10 = 1;
        }
        *v3 = v10;
        result = 35;
      }
      FIELD_U16(a1, 6100) = result;
      break;
    case 1:
      v4 = (_WORD *)(a1 + 6100);
      if ( !FIELD_U16(a1, 6100) )
      {
        if ( FIELD_U8(a1, 6108) )
        {
          v11 = 0;
          do
          {
            if ( *(_BYTE *)(sub_6073AFA4(a1, v11) + 7401) )
            {
              sub_6073AFA4(a1, v11);
              v12 = sub_6073AFA4(a1, v11);
              FIELD_U8(v12, 7620) = 1;
              v13 = FIELD_U32(v12, 7396);
              FIELD_U8(v13, 6802) = 1;
              FIELD_U8(v13, 6808) = 1;
              FIELD_U8(v13, 6800) = 0;
              FIELD_U32(v13, 6804) = 1;
              StateMgr__changeState((StateMgr *)(v13 + 6084), (StateBase *)&dword_60CBDDC0);
            }
            ++v11;
          }
          while ( v11 < (unsigned int)FIELD_U8(a1, 6108) );
          v4 = (_WORD *)(a1 + 6100);
          result = (unsigned __int8)*v3 + 1;
        }
        else
        {
          result = 2;
        }
        *v4 = 80;
        goto LABEL_29;
      }
      result = FIELD_U16(a1, 6100) - 1;
      *v4 = result;
      break;
    case 2:
      v7 = FIELD_U16(a1, 6100);
      v6 = (_WORD *)(a1 + 6100);
      v5 = v7;
      if ( v7 )
      {
        result = v5 - 1;
        *v6 = result;
      }
      else
      {
        result = 3;
LABEL_29:
        *v3 = result;
      }
      break;
    case 3:
      result = a1 + 6100;
      if ( FIELD_U16(a1, 6100) )
      {
        *(_WORD *)result = FIELD_U16(a1, 6100) - 1;
      }
      else
      {
        FIELD_U8(a1, 6112) = 1;
        result = 6112;
      }
      break;
    default:
      return result;
  }
  return result;
}
