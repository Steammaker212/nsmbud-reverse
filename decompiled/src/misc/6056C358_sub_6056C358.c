/* sub_6056C358
 * address: 0x6056C358   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6056C358(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  unsigned int result; // r0
  char v5; // r0

  v3 = (_DWORD *)(a1 + 7412);
  v2 = FIELD_U32(a1, 7412);
  if ( v2 )
    *v3 = v2 - 1;
  if ( FIELD_U32(a1, 7404) == 1 )
  {
    if ( FIELD_U8(a1, 7452) )
      FIELD_U32(a1, 7436) = 2;
    if ( FIELD_U8(a1, 7453) )
      FIELD_U32(a1, 7440) = 2;
    if ( FIELD_U8(a1, 7454) )
      FIELD_U32(a1, 7444) = 2;
    if ( FIELD_U8(a1, 7455) )
      FIELD_U32(a1, 7448) = 2;
  }
  sub_6056CFFC(a1);
  sub_6056DC3C(a1, 1);
  sub_6056DF3C(a1);
  if ( !*v3 )
  {
    FIELD_U32(a1, 7456) = 0;
    FIELD_U32(a1, 7476) = 0;
    FIELD_U32(a1, 7484) = 0;
    FIELD_U32(a1, 7500) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE728);
  }
  FIELD_U32(a1, 6872) = 0;
  result = FIELD_U8(a1, 7468);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB04EC);
  }
  else
  {
    if ( result != 2 )
      return result;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB04A4);
    FIELD_U32(a1, 6872) = 1;
  }
  result = FIELD_U32(a1, 6856);
  if ( result != 21 )
  {
    sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
    v5 = FIELD_U8(a1, 7469);
    FIELD_U8(a1, 6850) = v5;
    FIELD_U8(a1, 84) = v5;
    sub_60564098(a1);
    return sub_605641B4(a1);
  }
  return result;
}
