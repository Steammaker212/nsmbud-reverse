/* SE_SYS_CB_FINAL_RESULT_ref
 * address: 0x60524858   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CB_FINAL_RESULT_ref(int a1)
{
  int result; // r0
  int *v3; // r6
  unsigned int i; // r7
  unsigned int v5; // r1
  int v6; // r1
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // t1
  int v10; // r3

  FIELD_U32(a1, 4660) = 60;
  if ( FIELD_U8(a1, 4674) )
  {
    sub_60473DE4((_DWORD *)(a1 + 44), 1u, &dword_60CA9964, 0);
    FIELD_U32(a1, 4664) = 1;
    sub_60528300(a1);
    return sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_FINAL_RESULT", 0, 1);
  }
  else
  {
    sub_605288D4(a1);
    v3 = (int *)(a1 + 4620);
    result = FIELD_U32(a1, 4620);
    if ( result >= 1 )
    {
      for ( i = 0; (int)i < result; ++i )
      {
        v5 = 0;
        if ( i < 4 )
          v5 = i;
        v6 = a1 + 4 * v5;
        v9 = FIELD_U32(v6, 4152);
        v7 = (_DWORD *)(v6 + 4152);
        v8 = v9;
        if ( !FIELD_U32(v9, 3044) )
        {
          FIELD_U8(v8, 3065) = 1;
          sub_604034B0(*v7 + 56, (int)&dword_60CA9A4C);
          result = *v3;
        }
      }
      if ( result >= 1 )
      {
        result = 0;
        do
        {
          v10 = 0;
          if ( (unsigned int)result < 4 )
            v10 = result;
          ++result;
          *(_DWORD *)(*(_DWORD *)(a1 + 4 * v10 + 4152) + 3044) = 2;
        }
        while ( result < *v3 );
      }
    }
  }
  return result;
}
