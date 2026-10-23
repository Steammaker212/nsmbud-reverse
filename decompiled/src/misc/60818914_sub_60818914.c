/* sub_60818914
 * address: 0x60818914   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818914(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = dword_60C9BB38;
  if ( dword_60C9BB38 )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)dword_60C9BB38 + 20))(dword_60C9BB38, 0);
    sub_60422BD4(v2);
    sub_6098B540(FIELD_U32(dword_60CD0C84, 864));
    sub_608EB168(a1);
    sub_60422C24(v2);
  }
  else
  {
    sub_6098B540(FIELD_U32(dword_60CD0C84, 864));
    sub_608EB168(a1);
  }
  nullsub_2242(FIELD_U32(dword_60CD0C84, 864));
  result = FIELD_U32(dword_60CD0C84, 864);
  FIELD_U8(result, 380) = 1 - FIELD_U8(result, 380);
  return result;
}
