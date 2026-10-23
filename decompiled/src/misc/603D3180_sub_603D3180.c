/* sub_603D3180
 * address: 0x603D3180   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D3180(int result, int a2, int a3, int a4, float a5, float a6, float a7)
{
  _BYTE *v8; // r3
  int v9; // r5
  int v10; // r5

  v8 = (_BYTE *)(result + 666);
  if ( FIELD_U8(result, 666) )
  {
    v8 = (_BYTE *)(result + 694);
    if ( FIELD_U8(result, 694) )
    {
      v8 = (_BYTE *)(result + 722);
      if ( FIELD_U8(result, 722) )
      {
        v8 = (_BYTE *)(result + 750);
        if ( FIELD_U8(result, 750) )
          return result;
        v9 = 3;
      }
      else
      {
        v9 = 2;
      }
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = result + 28 * v9;
  FIELD_F32(v10, 644) = a5;
  FIELD_F32(v10, 648) = a6;
  FIELD_F32(v10, 652) = a7;
  FIELD_U32(v10, 656) = a2;
  FIELD_U32(v10, 660) = a3;
  FIELD_U16(v10, 664) = 480;
  *v8 = 1;
  result = Actor__getProfileId((Actor *)result);
  if ( result == 664 )
    FIELD_U32(v10, 668) = a4;
  return result;
}
