
    server->on("/bundle.js", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/javascript", (uint8_t *)html_bundle_js_gz, sizeof(html_bundle_js_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/components.js", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/javascript", (uint8_t *)html_components_js_gz, sizeof(html_components_js_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/font-files/Inter-roman.var.woff2", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "application/octet-stream", (uint8_t *)html_font_files_Inter_roman_var_woff2_gz, sizeof(html_font_files_Inter_roman_var_woff2_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/formationflight.css", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/css", (uint8_t *)html_formationflight_css_gz, sizeof(html_formationflight_css_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/history.min.js", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/javascript", (uint8_t *)html_history_min_js_gz, sizeof(html_history_min_js_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/images/logo.png", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "image/png", (uint8_t *)html_images_logo_png_gz, sizeof(html_images_logo_png_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/index.html", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", (uint8_t *)html_index_html_gz, sizeof(html_index_html_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", (uint8_t *)html_index_html_gz, sizeof(html_index_html_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/inter.css", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/css", (uint8_t *)html_inter_css_gz, sizeof(html_inter_css_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/main.js", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/javascript", (uint8_t *)html_main_js_gz, sizeof(html_main_js_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });

    server->on("/tailwind.css", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/css", (uint8_t *)html_tailwind_css_gz, sizeof(html_tailwind_css_gz));
        response->addHeader("Content-Encoding", "gzip");
        request->send(response);
    });
