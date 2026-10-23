/* sub_608D1A0C
 * address: 0x608D1A0C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D1A0C(int a1)
{
  void *v2; // r0
  char *v3; // r0
  char *v4; // r0
  char *v5; // r0
  int v6; // r0

  if ( FIELD_U8(a1, 144) )
  {
    v2 = sub_608065A0();
    sub_608B683C((int)v2, (int *)a1);
    FIELD_U8(a1, 144) = 0;
    v3 = (char *)sub_608065A0();
    nn__os__LockMutex(v3 + 1408);
    v4 = (char *)sub_608065A0();
    nn__audio__ReleaseSubMix(v4 + 12, a1 + 44);
    v5 = (char *)sub_608065A0();
    nn__os__UnlockMutex(v5 + 1408);
  }
  v6 = FIELD_U32(a1, 52);
  if ( v6 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 12))(v6, -1);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  return sub_608D0C88(a1);
}
