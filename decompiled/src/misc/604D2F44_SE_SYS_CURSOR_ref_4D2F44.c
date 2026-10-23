/* SE_SYS_CURSOR_ref_4D2F44
 * address: 0x604D2F44   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CURSOR_ref_4D2F44(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  int *v4; // r1

  v2 = 0;
  v3 = FIELD_U32(a1, 615700);
  if ( v3 >= 0xA )
    v3 = 0;
  switch ( *(_DWORD *)(a1 + 52644 * v3 + 141860) )
  {
    case 2:
      v2 = 1;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
      sub_60502548(a1 + 3800);
      FIELD_U16(a1, 4852) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3840));
      sub_604D3074(a1);
      return v2;
    case 4:
      v4 = &dword_60CA3378;
      goto LABEL_8;
    case 6:
      v4 = &dword_60CA32D8;
      goto LABEL_8;
    case 9:
      FIELD_U8(a1, 615720) = 1;
      v4 = &dword_60CA33D8;
LABEL_8:
      StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
      sub_604D1A84(a1);
      v2 = 1;
      break;
    default:
      return v2;
  }
  return v2;
}
