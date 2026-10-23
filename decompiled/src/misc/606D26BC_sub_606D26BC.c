/* sub_606D26BC
 * address: 0x606D26BC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D26BC(int a1)
{
  _BYTE *v2; // r9
  int v3; // r6
  int v4; // r8
  unsigned int v5; // r7
  _DWORD **v6; // r5
  int result; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r1
  int v13; // r2

  v2 = (_BYTE *)(a1 + 6188);
  v3 = FIELD_U32(a1, 164);
  v4 = a1 + 108;
  v5 = FIELD_U32(a1, 6156);
  v6 = *(_DWORD ***)(a1 + 6152);
  if ( FIELD_U8(a1, 6184) )
  {
    do
    {
      (*v6)[61] = v3;
      result = (unsigned __int8)*v2;
      if ( !*v2 )
      {
        ((void (__fastcall *)(_DWORD **, int))loc_6069B070)(v6 + 1, v4);
        v8 = FIELD_U32(a1, 108);
        v9 = FIELD_U32(a1, 112);
        v10 = FIELD_U32(a1, 116);
        FIELD_U32(a1, 584) = v8;
        FIELD_U32(a1, 588) = v9;
        FIELD_U32(a1, 592) = v10;
        FIELD_U32(a1, 608) = v8;
        FIELD_U32(a1, 612) = v9;
        FIELD_U32(a1, 616) = v10;
        result = sub_60160948(*v6);
      }
      v6 += 11;
    }
    while ( (unsigned int)v6 < v5 );
  }
  else
  {
    do
    {
      (*v6)[61] = v3;
      result = (unsigned __int8)*v2;
      if ( !*v2 )
      {
        result = ((int (__fastcall *)(_DWORD **, int))loc_6069B070)(v6 + 1, v4);
        if ( result == 1 )
        {
          v11 = FIELD_U32(a1, 108);
          v12 = FIELD_U32(a1, 112);
          v13 = FIELD_U32(a1, 116);
          FIELD_U32(a1, 584) = v11;
          FIELD_U32(a1, 588) = v12;
          FIELD_U32(a1, 592) = v13;
          FIELD_U32(a1, 608) = v11;
          FIELD_U32(a1, 612) = v12;
          FIELD_U32(a1, 616) = v13;
          result = sub_60160948(*v6);
        }
      }
      v6 += 11;
    }
    while ( (unsigned int)v6 < v5 );
  }
  return result;
}
