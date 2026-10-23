/* sub_608ADFE8
 * address: 0x608ADFE8   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *sub_608ADFE8()
{
  char *result; // r0
  void *v1; // r0
  int v2; // r4
  int v3; // r0
  void *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  char *v11; // r0
  int v12; // r1
  int v13; // r0
  void *v14; // r0
  char *v15; // r0
  int v16; // r0
  void *v17; // r0
  int v18; // r0
  int v19; // r0
  void *v20; // r0
  int v21; // r0
  int v22; // r0

  result = (char *)(unsigned __int8)byte_60CC8CD0;
  if ( byte_60CC8CD0 )
  {
    if ( byte_60C5AF21 )
    {
      v1 = sub_608C3B10();
      v2 = sub_608C2C40(v1, 1);
      if ( byte_60CC8D0F )
      {
        v3 = ((int (*)(void))sub_608C3C60)();
        sub_608C4168(v3, 0);
      }
      v4 = sub_608C3B10();
      sub_608C2B80(v4, v2);
    }
    if ( byte_60C5AF15 )
    {
      v5 = ((int (*)(void))sub_608C4DF4)();
      v6 = nullsub_2228(v5);
      v7 = sub_608C5534(v6);
      v8 = sub_608C5358(v7);
      v9 = sub_608C4DF4(v8);
      sub_608C4EF4(v9);
    }
    else
    {
      byte_60C5AF15 = 1;
    }
    if ( byte_60C5AF23 )
    {
      v10 = ((int (*)(void))sub_608C3C60)();
      v11 = (char *)sub_608C3F30(v10);
    }
    else
    {
      v12 = 1;
      v11 = &byte_60C5AF23;
      byte_60C5AF23 = 1;
    }
    v13 = sub_608C7FF0(v11, v12);
    sub_608C81C0(v13);
    if ( byte_60C5AF16 )
    {
      v14 = sub_608065A0();
      v15 = (char *)((int (__fastcall *)(void *, void *, _DWORD))loc_608B5858)(v14, &unk_60CC8CF4, 0);
    }
    else
    {
      v15 = &byte_60C5AF16;
      byte_60C5AF16 = 1;
    }
    v16 = sub_608CAEDC(v15);
    sub_608CB064(v16);
    v17 = sub_608065A0();
    v18 = ((int (__fastcall *)(void *))loc_608B6374)(v17);
    v19 = sub_608C3C60(v18);
    sub_608C3F88(v19);
    if ( byte_60CC8CD2 )
    {
      v20 = sub_608C3B10();
      v21 = sub_608C25B4(v20);
      v22 = sub_608C3B98(v21);
      sub_608C25B4(v22);
      dword_60CC8CEC = 0;
      dword_60CC8CF0 = 0;
      byte_60CC8CD2 = 0;
    }
    byte_60CC8D0A = 0;
    byte_60CC8D0B = 0;
    byte_60CC8CD0 = 0;
    return &byte_60CC8CD0;
  }
  return result;
}
