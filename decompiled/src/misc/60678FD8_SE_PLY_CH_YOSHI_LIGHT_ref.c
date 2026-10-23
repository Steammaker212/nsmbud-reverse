/* SE_PLY_CH_YOSHI_LIGHT_ref
 * address: 0x60678FD8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_PLY_CH_YOSHI_LIGHT_ref(int a1)
{
  int *v2; // r0

  sub_605E6738(a1);
  FIELD_U32(a1, 6260) |= 0x40000u;
  if ( sub_6068C438(MaskMgr_instance) == 1 )
  {
    v2 = sub_60002B90(FIELD_S8(a1, 6336), unk_60C263FC);
    sub_605D8938(a1, "SE_PLY_CH_YOSHI_LIGHT", (int)v2);
    if ( FIELD_U32(a1, 8032) == 3 )
    {
      FIELD_U32(a1, 8128) = 1;
      sub_6040F4B8(FIELD_U32(a1, 8036), (int)&dword_60CB7D74, dword_60CB7D7C, 1.0, 0.0);
    }
    FIELD_U32(a1, 8032) = 2;
    FIELD_U32(a1, 8136) = 0;
    FIELD_U32(a1, 8140) = 1086324736;
  }
  sub_605EAB48(a1 + 6064, 8);
}
