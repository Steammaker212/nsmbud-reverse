/* sub_6042FF60
 * address: 0x6042FF60   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6042FF60(int a1)
{
  int i; // r6
  int v3; // r7
  int v4; // r0
  _DWORD *v5; // r0

  *(_DWORD *)a1 = off_60BFA5F0;
  sub_6042ADEC((_DWORD *)dword_60C9C0FC, 3u);
  if ( FIELD_U8(a1, 32) )
  {
    for ( i = 0; i != 15; ++i )
    {
      v3 = a1 + 16 * i;
      v4 = FIELD_U32(v3, 40);
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 48))(v4);
      FIELD_U32(v3, 40) = 0;
      FIELD_U8(v3, 52) = 0;
    }
  }
  FIELD_U32(a1, 36) = 0;
  v5 = sead__IDisposer__dtor((_DWORD *)a1);
  operator_delete(v5);
}
