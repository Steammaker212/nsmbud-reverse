/* sub_609A59D0
 * address: 0x609A59D0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A59D0(int a1)
{
  char *v2; // r5
  int v3; // r0
  size_t v4; // r6

  sead__TreeNode__ctor((_DWORD *)(a1 + 4));
  *(_DWORD *)a1 = off_60C60E08;
  FIELD_U32(a1, 24) = a1 + 32;
  FIELD_U32(a1, 20) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 28) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 20);
  FIELD_U32(a1, 20) = &off_60BD4C08;
  v2 = *(char **)(a1 + 24);
  if ( v2 != &byte_60ABC94D )
  {
    v3 = FIELD_U32(a1, 28);
    v4 = v3 - 1;
    if ( v3 > 0 )
      v4 = 0;
    memset(*(void **)(a1 + 24), 0, v4);
    v2[v4] = 0;
  }
  FIELD_U32(a1, 20) = &off_60BD4BF0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U8(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = a1 + 112;
  FIELD_U32(a1, 116) = a1 + 112;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  return a1;
}
