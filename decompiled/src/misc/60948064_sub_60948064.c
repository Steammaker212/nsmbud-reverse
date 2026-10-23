/* sub_60948064
 * address: 0x60948064   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60948064(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // r5
  _DWORD *v6; // r6
  bool v7; // zf

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 24))(a1);
  if ( result == 1 )
  {
    v5 = FIELD_U32(a2, 4);
    if ( v5 )
    {
      v6 = (_DWORD *)a1[1];
      while ( FIELD_U32(v5, 4) != v6[1] )
      {
        v5 = FIELD_U32(v5, 8);
        if ( !v5 )
          return (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
      }
      if ( v6 )
      {
        do
        {
          (*(void (__fastcall **)(_DWORD *, int))(*v6 + 8))(v6, v5);
          v6 = (_DWORD *)v6[2];
          v7 = v6 == 0;
          if ( v6 )
          {
            v5 = FIELD_U32(v5, 8);
            v7 = v5 == 0;
          }
        }
        while ( !v7 );
      }
    }
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  }
  return result;
}
