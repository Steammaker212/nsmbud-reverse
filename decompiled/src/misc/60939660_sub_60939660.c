/* sub_60939660
 * address: 0x60939660   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60939660(int a1)
{
  _DWORD *v2; // r5
  char *v3; // r5
  int v4; // r0
  size_t v5; // r6

  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  *(_DWORD *)a1 = &off_60C5E308;
  FIELD_U32(a1, 24) = a1 + 32;
  FIELD_U32(a1, 20) = &BufferedSafeStringBase_char_vtable_probably;
  v2 = (_DWORD *)(a1 + 20);
  FIELD_U32(a1, 28) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 20);
  *v2 = &off_60BD4C38;
  v3 = *(char **)(a1 + 24);
  if ( v3 != &byte_60ABC94D )
  {
    v4 = FIELD_U32(a1, 28);
    v5 = v4 - 1;
    if ( v4 > 0 )
      v5 = 0;
    memset(*(void **)(a1 + 24), 0, v5);
    v3[v5] = 0;
  }
  FIELD_U32(a1, 20) = &off_60BD4C20;
  FIELD_U32(a1, 64) = 0;
  FIELD_U8(a1, 68) = 0;
  FIELD_U8(a1, 69) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U16(a1, 84) = 255;
  return a1;
}
