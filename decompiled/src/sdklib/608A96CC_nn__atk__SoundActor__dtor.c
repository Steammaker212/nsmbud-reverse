/* nn__atk__SoundActor__dtor
 * address: 0x608A96CC   size: 196   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundActor__dtor(int a1)
{
  *(_DWORD *)a1 =&nn__atk__SoundActor__vtable;
  if ( !FIELD_U8(a1, 117) )
  {
    sub_608B07EC(FIELD_U32(a1, 72), a1);
    FIELD_U32(a1, 72) = 0;
    sub_608B07EC(FIELD_U32(a1, 76), a1);
    FIELD_U32(a1, 76) = 0;
    sub_608B07EC(FIELD_U32(a1, 80), a1);
    FIELD_U32(a1, 80) = 0;
    sub_608B07EC(FIELD_U32(a1, 84), a1);
    FIELD_U32(a1, 84) = 0;
    FIELD_U8(a1, 117) = 1;
    FIELD_U8(a1, 116) = 0;
    FIELD_U32(a1, 4) = 0;
    FIELD_U32(a1, 96) = 1065353216;
    FIELD_U32(a1, 92) = 1065353216;
    FIELD_U32(a1, 88) = 1065353216;
    FIELD_U32(a1, 100) = 0;
    FIELD_U32(a1, 104) = 0;
    FIELD_U32(a1, 108) = -1;
    FIELD_U32(a1, 112) = 0;
  }
  sub_608B0748(a1 + 56);
  sub_608B0748(a1 + 40);
  sub_608B0748(a1 + 24);
  sub_608B0748(a1 + 8);
  return a1;
}
