/* sub_6023AB38
 * address: 0x6023AB38   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023AB38(float *a1)
{
  float *v2; // r6

  v2 = a1 + 5;
  sub_608FDDF4((int)(a1 + 5), "Min=%5.1f,Max=%5.1f", (float)-*a1, *a1);
  sub_608FDDF4((int)(a1 + 24), "Min=0,Max=%5.1f", *a1);
  sub_608FDDF4((int)(a1 + 43), "Min=%5.1f,Max=%5.1f", (float)-a1[2], a1[2]);
  sub_608FDDF4((int)(a1 + 62), "Min=0,Max=%5.1f", a1[2]);
  sub_608FDDF4((int)(a1 + 81), "Min=0,Max=%5.1f", (float)(a1[2] / 10.0));
  sub_608FDDF4((int)(a1 + 127), "Min=%5.1f,Max=%5.1f,Menu=True,MenuDefault=Auto", (float)-a1[1], a1[1]);
  sub_608FDDF4((int)(a1 + 154), "Min=0,Max=%5.1f,Menu=True,MenuDefault=Auto", a1[1]);
  sub_608FDDF4((int)(a1 + 181), "Min=%5.1f,Max=%5.1f,Menu=True,MenuDefault=Auto", (float)-a1[3], a1[3]);
  sub_608FDDF4((int)(a1 + 208), "Min=0,Max=%5.1f,Menu=True,MenuDefault=Auto", a1[3]);
  sub_608FDDF4((int)(a1 + 235), "Min=0,Max=%d", *((_DWORD *)a1 + 4));
  sub_608FDDF4((int)(a1 + 254), "Min=1,Max=%d", *((_DWORD *)a1 + 4));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 5) + 12))(v2);
  sub_608FDDF4((int)(a1 + 273), "%s,IsEnable=False", *((const char **)a1 + 6));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 24) + 12))(a1 + 24);
  sub_608FDDF4((int)(a1 + 292), "%s,IsEnable=False", *((const char **)a1 + 25));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 62) + 12))(a1 + 62);
  sub_608FDDF4((int)(a1 + 311), "%s,IsEnable=False", *((const char **)a1 + 63));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 127) + 12))(a1 + 127);
  sub_608FDDF4((int)(a1 + 330), "%s,IsEnable=False", *((const char **)a1 + 128));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 181) + 12))(a1 + 181);
  sub_608FDDF4((int)(a1 + 384), "%s,IsEnable=False", *((const char **)a1 + 182));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 208) + 12))(a1 + 208);
  sub_608FDDF4((int)(a1 + 403), "%s,IsEnable=False", *((const char **)a1 + 209));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 235) + 12))(a1 + 235);
  sub_608FDDF4((int)(a1 + 430), "%s,IsEnable=False", *((const char **)a1 + 236));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 154) + 12))(a1 + 154);
  sub_608FDDF4((int)(a1 + 357), "%s,IsEnable=False", *((const char **)a1 + 155));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 254) + 12))(a1 + 254);
  sub_608FDDF4((int)(a1 + 449), "%s,IsEnable=False", *((const char **)a1 + 255));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 62) + 12))(a1 + 62);
  sub_608FDDF4((int)(a1 + 100), "%s,Menu=True,MenuDefault=Auto", *((const char **)a1 + 63));
  sub_608FDDF4((int)(a1 + 468), "Min=0,Max=%d", 10 * *((_DWORD *)a1 + 4));
  sub_608FDDF4((int)(a1 + 487), "Min=1,Max=%d", 10 * *((_DWORD *)a1 + 4));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 468) + 12))(a1 + 468);
  sub_608FDDF4((int)(a1 + 506), "%s,IsEnable=False", *((const char **)a1 + 469));
  (*(void (__fastcall **)(float *))(*((_DWORD *)a1 + 487) + 12))(a1 + 487);
  return sub_608FDDF4((int)(a1 + 525), "%s,IsEnable=False", *((const char **)a1 + 488));
}
