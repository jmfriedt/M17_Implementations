/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(m17_coder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(eb70afa562771a9a54221898b9889044)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/m17/m17_coder.h>
// pydoc.h is automatically generated in the build directory
#include <m17_coder_pydoc.h>

void bind_m17_coder(py::module& m)
{

    using m17_coder    = gr::m17::m17_coder;


    py::class_<m17_coder, gr::block, gr::basic_block,
        std::shared_ptr<m17_coder>>(m, "m17_coder", D(m17_coder))

        .def(py::init(&m17_coder::make),
           D(m17_coder,make)
        )
        



        ;




}








