/* STRM_BGM_NX_STAFF_CREDIT_ref
 * address: 0x604FE92C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_NX_STAFF_CREDIT_ref(int a1)
{
  _DWORD *v2; // r4
  unsigned int v3; // r3

  sub_605025FC(a1 + 56);
  FIELD_U16(a1, 1108) = 0;
  sub_6047EABC((_DWORD *)(a1 + 96));
  v2 = (_DWORD *)(a1 + 2140);
  v3 = sub_604746E4((int)v2, &dword_60CA7418, &dword_60CA7428);
  if ( v3 != -1 )
    sub_604742D0(v2, 0, &dword_60CA7418, v3, 1.0, 0);
  return sub_608091F4(SoundSystem_instance, "STRM_BGM_NX_STAFF_CREDIT", 40, 90, 0.0, 1.0, 0, 0);
}
