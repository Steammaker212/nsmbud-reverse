/* sub_60686EB8
 * address: 0x60686EB8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60686EB8(int a1)
{
  int ProfileId; // r0
  char v3; // r1
  _BYTE *v4; // r5
  int v5; // r1

  ProfileId = Actor__getProfileId((Actor *)a1);
  v3 = 0;
  if ( ProfileId == 281 || (v3 = 1, ProfileId == 282) )
  {
    FIELD_U8(a1, 7659) = v3;
    v4 = (_BYTE *)(a1 + 7659);
  }
  else
  {
    v4 = (_BYTE *)(a1 + 7659);
  }
  sub_60686F98(a1);
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  wrist0_ref_68769C(a1);
  FIELD_U32(a1, 7644) = FIELD_U32(dword_60CC6484, 128);
  if ( *v4 )
    v5 = 7608;
  else
    v5 = 7604;
  *(_DWORD *)(a1 + v5) = FIELD_U32(a1, 56);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB83D4);
  return 1;
}
