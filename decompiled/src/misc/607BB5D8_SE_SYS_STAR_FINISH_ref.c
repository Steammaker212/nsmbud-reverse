/* SE_SYS_STAR_FINISH_ref
 * address: 0x607BB5D8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_STAR_FINISH_ref(unsigned __int8 *a1)
{
  int v2; // r1
  int result; // r0
  int *v4; // r5

  v2 = *((_DWORD *)a1 + 305);
  *((_DWORD *)a1 + 305) = v2 & 0xFFFFFFDF;
  v4 = (int *)(a1 + 11400);
  result = *((_DWORD *)a1 + 2850);
  if ( !result )
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 1188))(a1);
  if ( result >= 26 )
  {
    *((_DWORD *)a1 + 305) = v2 | 0x20;
    if ( result != 120 )
      goto LABEL_12;
LABEL_10:
    *v4 = 119;
    result = FIELD_U8(dword_60CBFA90, 460);
    if ( FIELD_U8(dword_60CBFA90, 460) )
      return result;
    sub_607734E8(a1, (int)"SE_SYS_STAR_FINISH", 0, 0);
    sub_607734E8(a1, (int)"SE_SYS_STAR_FINISH_RC", 0, 0);
    result = *v4;
LABEL_12:
    if ( result > 59 )
      return result;
    return sub_6078A8C0(PlayerMgr_instance);
  }
  if ( result <= 9 )
  {
    if ( !sub_607B6D60((int)a1) )
      (*(void (__fastcall **)(_DWORD))(**((_DWORD **)a1 + 2840) + 160))(*((_DWORD *)a1 + 2840));
    result = *v4;
    if ( *v4 != 120 )
      goto LABEL_12;
    goto LABEL_10;
  }
  return sub_6078A8C0(PlayerMgr_instance);
}
